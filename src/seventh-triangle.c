/*
 * The seventh triangle that is an outline.
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

	/* Seventh triangle */
        cairo_scale (cr, 10, 10); //This is for the outlines only; scaling will mess up already-generated PNGs 
	cairo_move_to (cr, 25.2, 32.6); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 30.4, 27.0); //Draws a line from Point A to Point B.
	cairo_move_to (cr, 30.4, 27.0); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 31.1, 38.0); //Draws a line from Point B to Point C.
	cairo_move_to (cr, 31.1, 38.0); //This will be removed (probably) in the next revision.
	cairo_line_to (cr, 25.2, 32.6); //Draws a line from Point C back to Point A.

        cairo_set_line_width (cr, 0.1);	//This is an outline, so the width of the line that makes the shape up here is 0.1px thick.
	cairo_stroke (cr); //Draw the final shape

	/* Write output and clean up */
        cairo_surface_write_to_png (surface, "../images/triangle7-outline.png"); //Name the resulting image as triangle7-outline.png
        cairo_destroy (cr); //Destroy the context pointer, frees up memory and/or lag
        cairo_surface_destroy (surface); //Destroy the surface pointer, frees up memory and/or lag

        return 0; //No numbers needed!!
}



