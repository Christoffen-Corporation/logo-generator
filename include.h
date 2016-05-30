#ifndef INCLUDE_H_INCLUDED
#define INCLUDE_H_INCLUDED
#include <cairo.h>

// Declare the colored_triangle() function
void colored_triangle(int img_width, int img_height, double r, double g, double b, double a, double verticeX1, double verticeY1, double verticeX2, double verticeY2, double verticeX3, double verticeY3, char img_name[50]);

//Declare the outlined_triangle() function
void outlined_triangle(int img_width, int img_height, double scaleX1, double scaleY1, double lineX1, double lineY1, double lineX2, double lineY2, double lineX3, double lineY3, double finishX1, double finishY1, char img_name[50]);

//Declare the join_triangles() function
int join_triangles(char tri_one[50], char tri_two[50], char tri_three[50], char tri_four[50], char tri_five[50], char tri_six[50], char tri_seven[50], char img_name[50]); 

#endif
