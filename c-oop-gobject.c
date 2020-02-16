#include <gtk/gtk.h>

int main(void) {
  gtk_init(NULL, NULL);

  GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(window), "Hello world!");
  g_signal_connect(window, "destroy", gtk_main_quit, NULL);
  gtk_widget_show_all(window);
  gtk_main();

  return 0;
}
