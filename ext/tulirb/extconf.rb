# frozen_string_literal: true

require "mkmf"

if ENV["SANITIZE"] == "true"
  CONFIG["optflags"] = "-O0"
  CONFIG["debugflags"] = "-ggdb3"
  $CFLAGS << " -fsanitize=address -fno-omit-frame-pointer -fno-optimize-sibling-calls -DTULIRB_SANITIZE=1"
  $LDFLAGS << " -fsanitize=address -fno-omit-frame-pointer -fno-optimize-sibling-calls"
end

$srcs = %w[tiamalgamation.c tulirb.c]
create_makefile("tulirb/tulirb")
