# frozen_string_literal: true

def windows?
  RbConfig::CONFIG["host_os"] =~ /mswin|mingw/
end

def silence_stream(stream)
  old_stream = stream.dup
  stream.reopen(File::NULL)
  stream.sync = true
  yield
ensure
  stream.reopen(old_stream)
end

def reenable_task_with_prereqs(task_name)
  task = Rake::Task[task_name]
  return unless task.already_invoked # Skip if task hasn't run before

  task.prerequisite_tasks.each { |prereq| reenable_task_with_prereqs(prereq) } # Recursively reset prerequisites
  task.reenable # Reset the main task itself
end

def detect_memory_leaks!
  asan_path = `gcc -print-file-name=libasan.so`.strip
  env = { "LD_PRELOAD" => asan_path }
  Open3.capture3(env,
                 "ruby -Ilib:ext -r tulirb -e \"puts Tulirb.ema([[2, 4, 6]], period: 5)\"").tap do |_, error, status|
    puts("Running memory leak detection with AddressSanitizer")
    unless status.success?
      errors = error.split("\n\n").grep(%r{ext/tulirb})
      if errors.any?
        elog = "Memory leaks detected in C extension:\n\n"
        elog += errors.join("\n\n")
        raise(elog)
      end
    end

    puts("No memory leaks detected in C extension")
  end
end

require("bundler/gem_tasks")
require("rake/testtask")

Rake::TestTask.new(:test) do |t|
  t.libs << "test"
  t.libs << "lib"
  t.test_files = FileList["test/**/test_*.rb"]
end

require("rubocop/rake_task")
RuboCop::RakeTask.new

require("rake/extensiontask")
task(build: :compile)
Rake::ExtensionTask.new("tulirb") do |ext|
  ext.lib_dir = "lib/tulirb"
end

task(detect_memory_leaks: :clobber) do
  next if windows?

  require("open3")
  ENV["SANITIZE"] = "true"
  silence_stream($stderr) { Rake::Task["compile"].invoke }

  begin
    detect_memory_leaks!
  ensure
    reenable_task_with_prereqs("clobber")
    Rake::Task["clobber"].invoke
    ENV["SANITIZE"] = "false"
    reenable_task_with_prereqs("clobber")
    reenable_task_with_prereqs("compile")
  end
end

task(default: %i[detect_memory_leaks compile test rubocop clobber])
