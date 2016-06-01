# Make the "images" folder that will mysteriously appear out of nowhere when autogen.sh is run.
mkdir ../images;

# Make the "output" folder that will mysteriously appear out of nowhere when autogen.sh is run.
mkdir ../output;

# The command to create the entire blue "C"
cc -o ../output/all-triangles-color `pkg-config --cflags cairo` all-triangles-color.c `pkg-config --libs cairo`;

# The command to create the entire blue "c" with the text under it.
cc -o ../output/all-with-text `pkg-config --cflags cairo` all-with-text.c `pkg-config --libs cairo`;

# The command to create the first triangle of the blue "C"
cc -o ../output/first-triangle-color `pkg-config --cflags cairo` first-triangle-color.c `pkg-config --libs cairo`;

# The command to create the second triangle of the blue "C"
cc -o ../output/second-triangle-color `pkg-config --cflags cairo` second-triangle-color.c `pkg-config --libs cairo`;

# The command to create the third triangle of the blue "C"
cc -o ../output/third-triangle-color `pkg-config --cflags cairo` third-triangle-color.c `pkg-config --libs cairo`;

# The command to create the fourth triangle of the blue "C"
cc -o ../output/fourth-triangle-color `pkg-config --cflags cairo` fourth-triangle-color.c `pkg-config --libs cairo`;

# The command to create the fifth triangle of the blue "C"
cc -o ../output/fifth-triangle-color `pkg-config --cflags cairo` fifth-triangle-color.c `pkg-config --libs cairo`;

# The command to create the sixth triangle of the blue "C"
cc -o ../output/sixth-triangle-color `pkg-config --cflags cairo` sixth-triangle-color.c `pkg-config --libs cairo`;

# The command to create the seventh triangle of the blue "C"
cc -o ../output/seventh-triangle-color `pkg-config --cflags cairo` seventh-triangle-color.c `pkg-config --libs cairo`;

# The command to create the text of the Christoffen logo.
cc -o ../output/logo-text `pkg-config --cflags cairo` text.c `pkg-config --libs cairo`;

# Go into the output directory
cd ../output;

# Make the colored logo
./all-triangles-color;

# Create the colored logo with text
./all-with-text;

# Create the first triangle
./first-triangle-color;

# Create the second triangle
./second-triangle-color;

# Create the third triangle
./third-triangle-color;

# Create the fourth triangle
./fourth-triangle-color;

# Create the fifth triangle
./fifth-triangle-color;

# Create the sixth triangle
./sixth-triangle-color;

# Create the seventh triangle
./seventh-triangle-color;

# Create the text to be used in the logo
./logo-text

# Return to the directory we were originally in
cd ..;

