# Make the "images" folder that will mysteriously appear out of nowhere when autogen.sh is run.
mkdir ../images;

# Make the "output" folder that will mysteriously appear out of nowhere when autogen.sh is run.
mkdir ../output;

# Generate the all triangles put together
cc -o ../output/all-triangles `pkg-config --cflags cairo` all-triangles.c `pkg-config --libs cairo`;

# Generate the first outline
cc -o ../output/first-triangle `pkg-config --cflags cairo` first-triangle.c `pkg-config --libs cairo`;

# Generate the second outline
cc -o ../output/second-triangle `pkg-config --cflags cairo` second-triangle.c `pkg-config --libs cairo`;

# Generate the third outline
cc -o ../output/third-triangle `pkg-config --cflags cairo` third-triangle.c `pkg-config --libs cairo`;

# Generate the fourth outline
cc -o ../output/fourth-triangle `pkg-config --cflags cairo` fourth-triangle.c `pkg-config --libs cairo`;

# Generate the fifth outline
cc -o ../output/fifth-triangle `pkg-config --cflags cairo` fifth-triangle.c `pkg-config --libs cairo`;

# Generate the sixth outline
cc -o ../output/sixth-triangle `pkg-config --cflags cairo` sixth-triangle.c `pkg-config --libs cairo`;

# Generate the seventh outline
cc -o ../output/seventh-triangle `pkg-config --cflags cairo` seventh-triangle.c `pkg-config --libs cairo`;

# Go to the output directory
cd ../output;

# Output all outlines put together
./all-triangles;

# Output the first outline
./first-triangle;

# Output the second outline
./second-triangle;

# Output the third outline
./third-triangle;

# Output the fourth outline
./fourth-triangle;

# Output the fifth outline
./fifth-triangle;

# Output the sixth outline
./sixth-triangle;

# Output the seventh outline
./seventh-triangle;

# Return to the directory where we started.
cd ..;


