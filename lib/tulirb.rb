# frozen_string_literal: true

require_relative "tulirb/version"
require_relative "tulirb/tulirb"

module Tulirb
  class Error < StandardError; end
  extend(Ext)
  # Your code goes here...

  INDICATORS_INFO.each do |k, v|
    define_singleton_method(k) do |inputs, **options|
      opts = v[:options].map {|o| options[o.to_sym] || raise(ArgumentError, "missing keyword: :#{o}") }
      super(inputs, opts)
    end
  end
end
