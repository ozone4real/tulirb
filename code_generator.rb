# frozen_string_literal: true

require("tulirb")
require("active_support/core_ext/string")

file = File.open("code_output.rb", "a+")

file.write("class << self\n")

Tulirb::INDICATORS_INFO.each do |k, v|
  kwargs = v[:options].map { |o| "#{o}:" }.join(", ")
  kwargs = kwargs.empty? ? "" : ", #{kwargs}"
  options_doc = v[:options].map { |o| "# @param #{o} [Numeric] #{o.titleize}" }
  options_doc = options_doc.empty? ? "" : "\n#{options_doc.join(".\n")}."
  func = <<~RUBY
    # #{v[:full_name]}.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs. #{options_doc}
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/#{k})
    def #{k}(inputs#{kwargs})
      super(inputs, [#{v[:options].join(", ")}])
    end

  RUBY
  file.write(func)
end

file.write("end")
file.close
