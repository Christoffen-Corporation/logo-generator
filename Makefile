logo-generator: main.o outlined_triangle.o colored_triangle.o join_triangles.o options.o
	gcc -o logo-generator main.o outlined_triangle.o colored_triangle.o join_triangles.o options.o -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -lcairo 
	rm -rf main.o outlined_triangle.o colored_triangle.o join_triangles.o options.o

main.o: main.c include.h
	gcc -c main.c -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -lcairo 

outlined_triangle.o: outlined_triangle.c include.h
	gcc -c outlined_triangle.c -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -lcairo 

colored_triangle.o: colored_triangle.c include.h
	gcc -c colored_triangle.c -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -lcairo 

join_triangles.o: join_triangles.c include.h
	gcc -c join_triangles.c -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -lcairo 

options.o: options.c include.h 
	gcc -c options.c -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng12 -lcairo 

install: logo-generator
	install logo-generator /usr/bin/

clean: logo-generator
	rm -rf /usr/bin/logo-generator
