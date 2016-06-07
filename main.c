#include <stdio.h>
#include <argp.h>
#include <cairo.h>
#include "include.h"
const char *argp_program_version = "The Christoffen Corporation Logo Generator v2.0.1";
const char *argp_program_bug_address = "M. Gage Morgan <gage@christoffen.com>";
static char doc[] = "Generates all of the logo, or just some.";

static int parse_opt (int key, char *arg, struct argp_state *state) {
 switch (key) {
 case 'C': 
 colored_nologo(); 
 break;
 case 'c':
 colored_all();
 break;
 case 'O':
 outlined_nologo();
 break;
 case 'o':
 outlined_all();
 break;
 case 'F':
 frankenlogos();
 break;
 }
 return 0;
}

int main (int argc, char **argv) {
if (argc == 1) {
all_imgs();
} else {
 struct argp_option options[] =
 {
 { "colored-no-logo", 'C', 0, 0, "Generate all colored triangles, except for the logo\n"},
 { "colored-all", 'c', 0, 0, "Generate all colored triangles, and the logo\n"},
 { "outlined-no-logo", 'O', 0, 0, "Generate all outlined triangles, except for the logo\n"},
 { "outlined-all", 'o', 0, 0, "Generate all outlined triangles, and the logo\n"}, 
 { "frankenlogos", 'F', 0, 0, "Generate the Frankenlogos (don't ask; just do)\n"}, 
 { 0 }
 };
 struct argp argp = { options, parse_opt, 0, 0 };
 return argp_parse (&argp, argc, argv, 0, 0, 0); 
  }
}
