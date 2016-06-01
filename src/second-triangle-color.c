/*
 * The second triangle that has color.
 *
 * This is the final revision by Gage Morgan, started on October 3rd, 2015, finished on
 * October 17, 2015. In this revision, this compilation serves as commented Cairo for examples 
 * on how to build with the Cairo library.
 */
#include "/usr/include/cairo/cairo.h"

int
main (int argc, char *argv[])
{
        cairo_surface_t *surface = //Sets the Cairo surface context
            cairo_image_surface_create (CAIRO_FORMAT_ARGB32, 421, 410); //Creates Cairo image surface, sets image resolution.
        cairo_t *cr = //Declare *cr as a Cairo context.
            cairo_create (surface); //Sets the Cairo context as a pointer, *cr.

	/* Second triangle */
	cairo_set_source_rgba (cr, 0.60, 0.85, 0.91, 0.8); //Sets the color of the triangle.
	cairo_line_to (cr, 275, 44); //Draws a line from Point A to Point B.
	cairo_line_to (cr, 377, 102); //Draws a line from Point B to Point C.
	cairo_line_to (cr, 100, 118); //Draws a line from Point C back to Point A.	
	cairo_close_path (cr); //Finishes the connections between Points A and C, closes off the figure.

	cairo_fill_preserve (cr); //Preserve fill so shape doesn't output as an outline.
	cairo_set_source_rgba (cr, 0.60, 0.85, 0.91, 0.8); //Sets the color of the triangle (again)
	cairo_stroke (cr); //Draw the final shape

	/* Write output and clean up */
        cairo_surface_write_to_png (surface, "../images/triangle2-color.png"); //Name the resulting image as triangle2-color.png
        cairo_destroy (cr); //Destroy the context pointer, frees up memory and/or lag
        cairo_surface_destroy (surface); //Destroy the surface pointer, frees up memory and/or lag

        return 0; //No numbers needed!!
}



