# frozen_string_literal: true

require "mkmf"

# $LDFLAGS << " -fsanitize=address,undefined"
# $CFLAGS << " -fsanitize=address,undefined"

$srcs = %w[tiamalgamation.c tulirb.c]
create_makefile("tulirb/tulirb")
