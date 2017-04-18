#
# Makefile
#
# Copyright (c) 2017 Zach Peltzer
# Subject to the MIT License
#

src=./src
inc=./inc
bin=./bin
output=$(bin)/TINVADER.8xp

all: $(output)

$(output): $(src)/main.z80 $(src)/* $(bin)
	spasm -N -I $(inc) -I $(src) $< $@

$(bin):
	mkdir -vp $(bin)

run: $(output)
	tilem2 $(output)

clean:
	rm -r $(bin)

