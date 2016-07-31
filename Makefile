logo-generator: main.o outlined_triangle.o colored_triangle.o join_triangles.o options.o
	gcc `pkg-config --cflags --libs gtk+-3.0 cairo` -o logo-generator main.o outlined_triangle.o colored_triangle.o join_triangles.o options.o 

	rm -rf main.o outlined_triangle.o colored_triangle.o join_triangles.o options.o

main.o: main.c include.h
	gcc `pkg-config --cflags --libs gtk+-3.0 cairo` -c main.c 

outlined_triangle.o: outlined_triangle.c include.h
	gcc `pkg-config --cflags --libs gtk+-3.0 cairo` -c outlined_triangle.c
 
colored_triangle.o: colored_triangle.c include.h
	gcc `pkg-config --cflags --libs gtk+-3.0 cairo` -c colored_triangle.c 

join_triangles.o: join_triangles.c include.h
	gcc `pkg-config --cflags --libs gtk+-3.0 cairo` -c join_triangles.c 

options.o: options.c include.h 
	gcc `pkg-config --cflags --libs gtk+-3.0 cairo` -c options.c 

install: logo-generator
	install logo-generator /usr/bin/
	rm logo-generator

clean: logo-generator
	rm -rf /usr/bin/logo-generator
