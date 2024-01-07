# frozen_string_literal: true

require_relative("lib/tulirb/version")

Gem::Specification.new do |spec|
  spec.name = "tulirb"
  spec.version = Tulirb::VERSION
  spec.authors = ["Ezenwa Ogbonna"]
  spec.email = ["ezenwaogbonna1@gmail.com"]

  spec.summary = "Ruby bindings for the TulipIndicators technical analysis indicator library"
  spec.description = <<-DESCRIPTION
    Robust technical analysis indicator library for Ruby.#{" "}
    Build tools for financial trading, data analytics, e.t.c in Ruby
  DESCRIPTION
  spec.homepage = "https://github.com/ozone4real/tulirb"
  spec.license = "MIT"
  spec.required_ruby_version = ">= 2.6.0"

  spec.metadata["homepage_uri"] = spec.homepage
  spec.metadata["source_code_uri"] = "https://github.com/ozone4real/tulirb"

  # Specify which files should be added to the gem when it is released.
  # The `git ls-files -z` loads the files in the RubyGem that have been added into git.
  spec.files = Dir.chdir(__dir__) do
    `git ls-files -z`.split("\x0").reject do |f|
      (f == __FILE__) || f.match(%r{\A(?:(?:bin|test|spec|features)/|\.(?:git|circleci)|appveyor)})
    end
  end
  spec.bindir = "exe"
  spec.executables = spec.files.grep(%r{\Aexe/}) { |f| File.basename(f) }
  spec.require_paths = ["lib"]
  spec.extensions = ["ext/tulirb/extconf.rb"]

  # Uncomment to register a new dependency of your gem
  # spec.add_dependency "example-gem", "~> 1.0"

  # For more information and examples about making a new gem, check out our
  # guide at: https://bundler.io/guides/creating_gem.html
  spec.metadata["rubygems_mfa_required"] = "true"
end
