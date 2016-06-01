/*
 * The image used to place the text in the logo. This needs the Martel Sans Bold font to operate.
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
            cairo_image_surface_create (CAIRO_FORMAT_ARGB32, 421, 615); //Creates Cairo image surface, sets image resolution.
        cairo_t *cr = //Declare *cr as a Cairo context.
            cairo_create (surface); //Sets the Cairo context as a pointer, *cr.

	cairo_select_font_face (cr, "Martel Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD); //Select the font that you want to use
        cairo_set_font_size (cr, 40); //Select the font size that you would like to use.
        cairo_set_source_rgb (cr, 0.50, 0.50, 0.50); //Sets the color of the text.
        cairo_move_to (cr, 2, 495); //Tell Cairo to move this down so we have sufficient room for our nice blue "C'
        cairo_show_text (cr, " C H R I S T O F F E N"); //The first line says "C H R I S T O F F E N"

        cairo_select_font_face (cr, "Martel Sans", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD); //Select the font you want to use
        cairo_set_font_size (cr, 40); //Select the font size that you would like to use.
        cairo_set_source_rgb (cr, 0.5, 0.5, 0.5); //Sets the color of the text.
        cairo_move_to (cr, 1, 535); //Tell Cairo to move this down so we have sufficient room for our nice blue "C'
        cairo_show_text (cr, "C O R P O R A T I O N"); //The first line says "C H R I S T O F F E N"

	/* Write output and clean up */
        cairo_surface_write_to_png (surface, "../images/text.png"); //Name the resulting image as text.png
        cairo_destroy (cr); //Destroy the context pointer, frees up memory and/or lag
        cairo_surface_destroy (surface); //Destroy the surface pointer, frees up memory and/or lag

        return 0; //No numbers needed!!

}
