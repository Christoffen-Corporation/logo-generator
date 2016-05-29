#include <cairo.h>
#include "include.h"

int outlined() {
        cairo_surface_t *surface = //Sets the Cairo surface context
            cairo_image_surface_create (CAIRO_FORMAT_ARGB32, 421, 410); //Creates Cairo image surface, sets image resolution.
        cairo_t *cr = //Declare *cr as a Cairo context.
            cairo_create (surface); //Sets the Cairo context as a pointer, *cr.

	/* First triangle */
        cairo_scale (cr, 10, 10); //This is for the outlines only; scaling will mess up already-generated PNGs 
        cairo_move_to (cr, 2.3, 28.1); //This will be removed (probably) in the next revision.
        cairo_line_to (cr, 14.3, 3.0); //Draws a line from Point A to Point B.
	cairo_move_to (cr, 14.3, 3.0); //This will be removed (probably) in the next revision.
        cairo_line_to (cr, 19.8, 17.6); //Draws a line from Point B to Point C.
	cairo_move_to (cr, 19.8, 17.6); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 2.3, 28.1); //Draws a line from Point C back to Point A.

	/* Second triangle */
	cairo_move_to (cr, 10.0, 11.8); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 27.5, 4.4); //Draws a line from Point A to Point B.
	cairo_move_to (cr, 27.5, 4.4); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 37.7, 10.2); //Draws a line from Point B to Point C.
	cairo_move_to (cr, 37.7, 10.2); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 10.0, 11.8); //Draws a line from Point C back to Point A.


	/* Third triangle */
	cairo_move_to (cr, 36.3, 19.0); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 25.0, 12.6); //Draws a line from Point A to Point B.
	cairo_move_to (cr, 25.0, 12.6); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 30.5, 2.6); //Draws a line from Point B to Point C.
	cairo_move_to (cr, 30.5, 2.6); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 36.3, 19.0); //Draws a line from Point C back to Point A.


	/* Fourth triangle */
	cairo_move_to (cr, 29.0, 14.7); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 37.6, 13.0); //Draws a line from Point A to Point B.
	cairo_move_to (cr, 37.6, 13.0);	//This will be removed (probably) in the next revision.
	cairo_line_to (cr, 30.4, 22.2); //Draws a line from Point B to Point C.
	cairo_move_to (cr, 30.4, 22.2); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 29.0, 14.7); //Draws a line from Point C back to Point A.
	
	/* Fifth triangle */
	cairo_move_to (cr, 7.0, 18.4); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 24.4, 31.4); //Draws a line from Point A to Point B.
	cairo_move_to (cr, 24.4, 31.4);	//This will be removed (probably) in the next revision.
	cairo_line_to (cr, 14.8, 37.5); //Draws a line from Point B to Point C.
	cairo_move_to (cr, 14.8, 37.5); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 7.0, 18.4); //Draws a line from Point C back to Point A.

	/* Sixth triangle */
	cairo_move_to (cr, 12.8, 33.0); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 19.5, 26.0); //Draws a line from Point A to Point B.
	cairo_move_to (cr, 19.5, 26.0); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 33.3, 35.6); //Draws a line from Point B to Point C.
	cairo_move_to (cr, 33.3, 35.6); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 12.8, 33.0); //Draws a line from Point C back to Point A.
	
	/* Seventh triangle */
	cairo_move_to (cr, 25.2, 32.6); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 30.4, 27.0); //Draws a line from Point A to Point B.
	cairo_move_to (cr, 30.4, 27.0); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 31.1, 38.0); //Draws a line from Point B to Point C.
	cairo_move_to (cr, 31.1, 38.0); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 25.2, 32.6); //Draws a line from Point C back to Point A.

        cairo_set_line_width (cr, 0.1);	//This is an outline, so the width of the line that makes the shape up here is 0.1px thick.
	cairo_stroke (cr); //Draw the final shape

	/* Write output and clean up */
        cairo_surface_write_to_png (surface, "crstfn-outline.png"); //Name the resulting image as crstfn-outline.png
        cairo_destroy (cr); //Destroy the context pointer, frees up memory and/or lag
        cairo_surface_destroy (surface); //Destroy the surface pointer, frees up memory and/or lag

        return 0; //No numbers needed!!
}

int colored() {
cairo_surface_t *surface = //Sets the Cairo surface context
            cairo_image_surface_create (CAIRO_FORMAT_ARGB32, 421, 410); //Creates Cairo image surface, sets image resolution.
        cairo_t *cr = //Declare *cr as a Cairo context.
            cairo_create (surface); //Sets the Cairo context as a pointer, *cr.

	/* Declaration of first triangle pointer */
	cairo_surface_t *one;

	/* Declaration of second triangle pointer */
	cairo_surface_t *two;

	/* Declaration of third triangle pointer */
	cairo_surface_t *three;

	/* Declaration of fourth triangle pointer */
	cairo_surface_t *four;

	/* Declaration of fifth triangle pointer */
	cairo_surface_t *five;

	/* Declaration of sixth triangle pointer */
	cairo_surface_t *six;

	/* Declaration of seventh triangle pointer */
	cairo_surface_t *seven;

	/* Assigns the image of first triangle to the declared pointer */
	cairo_push_group (cr); //Push the image to a surface
	one = cairo_image_surface_create_from_png ("triangle1-color.png"); //Assign generated image to the pointer declared above
	cairo_pop_group_to_source (cr); //Pop it to the image you see

	/* Assigns the image of second triangle to the declared pointer */
	cairo_push_group (cr); //Push the image to a surface
	two = cairo_image_surface_create_from_png ("triangle2-color.png"); //Assign generated image to the pointer declared above
	cairo_pop_group_to_source (cr); //Pop it to the image you see

	/* Assigns the image of third triangle to the declared pointer */
	cairo_push_group (cr); //Push the image to a surface
	three = cairo_image_surface_create_from_png ("triangle3-color.png"); //Assign generated image to the pointer declared above
	cairo_pop_group_to_source (cr); //Pop it to the image you see

	/* Assigns the image of fourth triangle to the declared pointer */
	cairo_push_group (cr); //Push the image to a surface
	four = cairo_image_surface_create_from_png ("triangle4-color.png"); //Assign generated image to the pointer declared above
	cairo_pop_group_to_source (cr); //Pop it to the image you see

	/* Assigns the image of fifth triangle to the declared pointer */
	cairo_push_group (cr); //Push the image to a surface
	five = cairo_image_surface_create_from_png ("triangle5-color.png"); //Assign generated image to the pointer declared above
	cairo_pop_group_to_source (cr); //Pop it to the image you see

	/* Assigns the image of sixth triangle to the declared pointer */
	cairo_push_group (cr); //Push the image to a surface
	six = cairo_image_surface_create_from_png ("triangle6-color.png"); //Assign generated image to the pointer declared above
	cairo_pop_group_to_source (cr); //Pop it to the image you see

	/* Assigns the image of seventh triangle to the declared pointer */
	cairo_push_group (cr); //Push the image to a surface
	seven = cairo_image_surface_create_from_png ("triangle7-color.png"); //Assign generated image to the pointer declared above
	cairo_pop_group_to_source (cr); //Pop it to the image you see

	/* Assign pointer to source */
	cairo_set_source_surface (cr, one, 0, 0); //Makes sure the pointers appear all together and make the image using their assigned file
	cairo_paint (cr); //Transfers these images to the final output that you see, it paints the image that you see when compiled/outpuuted

	/* Assign pointer to source */
	cairo_set_source_surface (cr, two, 0, 0); //Makes sure the pointers appear all together and make the image using their assigned file
	cairo_paint (cr); //Transfers these images to the final output that you see, it paints the image that you see when compiled/outpuuted

	/* Assign pointer to source */
	cairo_set_source_surface (cr, three, 0, 0); //Makes sure the pointers appear all together and make the image using their assigned file
	cairo_paint (cr); //Transfers these images to the final output that you see, it paints the image that you see when compiled/outpuuted

	/* Assign pointer to source */
	cairo_set_source_surface (cr, four, 0, 0); //Makes sure the pointers appear all together and make the image using their assigned file
	cairo_paint (cr); //Transfers these images to the final output that you see, it paints the image that you see when compiled/outpuuted

	/* Assign pointer to source */
	cairo_set_source_surface (cr, five, 0, 0); //Makes sure the pointers appear all together and make the image using their assigned file
	cairo_paint (cr); //Transfers these images to the final output that you see, it paints the image that you see when compiled/outpuuted

	/* Assign pointer to source */
	cairo_set_source_surface (cr, six, 0, 0); //Makes sure the pointers appear all together and make the image using their assigned file
	cairo_paint (cr); //Transfers these images to the final output that you see, it paints the image that you see when compiled/outpuuted

	/* Assign pointer to source */
	cairo_set_source_surface (cr, seven, 0, 0); //Makes sure the pointers appear all together and make the image using their assigned file
	cairo_paint (cr); //Transfers these images to the final output that you see, it paints the image that you see when compiled/outpuuted

	/* Destroy the first triangle surface to free up memory and/or lag */
	cairo_surface_destroy (one); 

	/* Destroy the second triangle surface to free up memory and/or lag */
	cairo_surface_destroy (two); 

	/* Destroy the third triangle surface to free up memory and/or lag */
	cairo_surface_destroy (three);

	/* Destroy the fourth triangle surface to free up memory and/or lag */
	cairo_surface_destroy (four); 

	/* Destroy the first triangle surface to free up memory and/or lag */
	cairo_surface_destroy (five); 

	/* Destroy the first triangle surface to free up memory and/or lag */
	cairo_surface_destroy (six); 

	/* Destroy the first triangle surface to free up memory and/or lag */
	cairo_surface_destroy (seven); 

	/* Write output and clean up */
        cairo_surface_write_to_png (surface, "crstfn-color.png"); //Name the resulting image as crstfn-color.png
        cairo_destroy (cr); //Destroy the context pointer, frees up memory and/or lag
        cairo_surface_destroy (surface); //Destroy the surface pointer, frees up memory and/or lag

return 0;
}

int main() {

outlined();

colored();

outlined_triangle(421, 410, 10, 10, 2.3, 28.1, 14.3, 3.0, 19.8, 17.6, 2.3, 28.1, "triangle1-outline.png");
outlined_triangle(421, 410, 10, 10, 10.0, 11.8, 27.5, 4.4, 37.7, 10.2, 10.0, 11.8, "triangle2-outline.png");
outlined_triangle(421, 410, 10, 10, 30.5, 2.6, 36.3, 19.0, 25.0, 12.6, 30.5, 2.6, "triangle3-outline.png");
outlined_triangle(421, 410, 10, 10, 29.0, 14.7, 37.6, 13.0, 30.4, 22.2, 29.0, 14.7, "triangle4-outline.png");
outlined_triangle(421, 410, 10, 10, 7.0, 18.4, 24.4, 31.4, 14.8, 37.5, 7.0, 18.4, "triangle5-outline.png");
outlined_triangle(421, 410, 10, 10, 12.8, 33.0, 19.5, 26.0, 33.3, 35.6, 12.8, 33.0, "triangle6-outline.png");
outlined_triangle(421, 410, 10, 10, 25.2, 32.6, 30.4, 27.0, 31.1, 38.0, 25.2, 32.6, "triangle7-outline.png");

colored_triangle(421, 410, 0, 0.79, 0.83, 0.8, 143, 30, 198, 176, 23, 281, "triangle1-color.png");
	colored_triangle(421, 410, 0.60, 0.85, 0.91, 0.8, 275, 44, 377, 102, 100, 118, "triangle2-color.png");
	colored_triangle(421, 410, 0.28, 0.42, 0.61, 0.8, 363, 190, 250, 126, 305, 26, "triangle3-color.png");
	colored_triangle(421, 410, 0, 0.63, 0.90, 0.8, 376, 130, 304, 222, 290, 147, "triangle4-color.png");
	colored_triangle(421, 410, 0.60, 0.85, 0.91, 0.8, 244, 314, 148, 375, 70, 184, "triangle5-color.png");
	colored_triangle(421, 410, 0.28, 0.42, 0.61, 0.8, 195, 260, 333, 356, 128, 330, "triangle6-color.png");
	colored_triangle(421, 410, 0, 0.63, 0.90, 0.8, 304, 270, 311, 380, 252, 326, "triangle7-color.png");
void all();
return 0;
}
