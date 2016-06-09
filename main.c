#include <stdio.h>
#include <argp.h>
#include <gtk/gtk.h>
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

static void
frankenlogo (GtkWidget *widget,
             gpointer   data)
{
  frankenlogos();
}

static void
color_no_logo (GtkWidget *widget,
             gpointer   data)
{
  colored_nologo();
}

static void
all (GtkWidget *widget,
             gpointer   data)
{
  all_imgs();
}

static void
outline_no_logo (GtkWidget *widget,
             gpointer   data)
{
  outlined_nologo();
}

static void
outline_all (GtkWidget *widget,
             gpointer   data)
{
  outlined_all();
}

static void
color_all (GtkWidget *widget,
             gpointer   data)
{
  colored_all();
}

static void
activate (GtkApplication *app,
          gpointer        user_data)
{
  GtkWidget *window;
  GtkWidget *button;
  GtkWidget *button_box;

  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "Christoffen Corporation Logo Generator");
  gtk_window_set_default_size (GTK_WINDOW (window), 400, 500);

  button_box = gtk_box_new (GTK_ORIENTATION_VERTICAL, 5);
  gtk_container_add (GTK_CONTAINER (window), button_box);
  
  button = gtk_button_new_with_label ("Frankenlogos");
  g_signal_connect (button, "clicked", G_CALLBACK (frankenlogo), NULL);
  gtk_container_add (GTK_CONTAINER (button_box), button);

  button = gtk_button_new_with_label ("Colored (no logo)");
  g_signal_connect (button, "clicked", G_CALLBACK (color_no_logo), NULL);
  gtk_container_add (GTK_CONTAINER (button_box), button);

  button = gtk_button_new_with_label ("All");
  g_signal_connect (button, "clicked", G_CALLBACK (all), NULL);
  gtk_container_add (GTK_CONTAINER (button_box), button);

  button = gtk_button_new_with_label ("Outlined (no logo)");
  g_signal_connect (button, "clicked", G_CALLBACK (outline_no_logo), NULL);
  gtk_container_add (GTK_CONTAINER (button_box), button);

  button = gtk_button_new_with_label ("Outlined (all)");
  g_signal_connect (button, "clicked", G_CALLBACK (outline_all), NULL);
  gtk_container_add (GTK_CONTAINER (button_box), button);

  gtk_widget_show_all (window);
}

int
main (int    argc,
      char **argv)
{
if (argc == 1) {
  GtkApplication *app;
  int status;

  app = gtk_application_new ("org.gtk.christoffen-logo-generator", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);

  return status;

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
