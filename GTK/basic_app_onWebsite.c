// Include gtk
#include <gtk/gtk.h>

static void on_activate(GtkApplication *app) {
    // Create a new window
    GtkWidget *window = gtk_application_window_new(app);
    // Create a new button
    GtkWidget *button = gtk_button_new_with_label("Hello, World!");
    // When the button is clicked, close the windows passed as an argument
    g_signal_connect_swapped(button, "clicked", G_CALLBACK(gtk_window_close), window);
    gtk_container_add(GTK_CONTAINER(window), button);

    // Now my code
    gtk_window_set_title(GTK_WINDOW(window), "Applicazione di test");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 400);

    GtkWidget *button_box = gtk_button_box_new(GTK_ORIENTATION_HORIZONTAL);
    gtk_container_add(GTK_CONTAINER(button_box), button_box);

    gtk_widget_show_all(window);
}

int main(int argc, char *argv[]) {
    // Create a new application
    GtkApplication *app = gtk_application_new("me.francesco.test", G_APPLICATION_FLAGS_NONE);
    g_signal_connect(app, "activate", G_CALLBACK(on_activate), NULL);

    return g_application_run(G_APPLICATION(app), argc, argv);
}