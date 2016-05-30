logo-generator: main.o 

main.o: main.c outlined_triangle.c colored_triangle.c join_triangles.c
	gcc main.c outlined_triangle.c colored_triangle.c join_triangles.c -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -lcairo -o logo-generator

install: logo-generator
	install logo-generator /usr/bin

