# what flags you want to pass to the C compiler & linker
CFLAGS = `pkg-config --cflags gtk+-3.0 cairo` 
LDFLAGS = `pkg-config --libs gtk+-3.0 cairo` 

# this lists the binaries to produce, the (non-PHONY, binary) targets in
# the previous manual Makefile
bin_PROGRAMS = logogenerator
logogenerator_SOURCES = main.c options.c colored_triangle.c join_triangles.c outlined_triangle.c include.h


