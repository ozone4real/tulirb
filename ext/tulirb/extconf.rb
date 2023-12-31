# frozen_string_literal: true

require "mkmf"

$srcs = %w{tiamalgamation.c tulirb.c}
create_makefile("tulirb/tulirb")
