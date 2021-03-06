/* $Id: bugd.h,v 1.13 2013/09/22 04:46:42 moonsdad Exp $ */
#pragma once

#include <stdlib.h>
#include <gtk/gtk.h>
#include <sqlite3.h>

//#define DEBUG

#define BUG_LIST_COLS 3
#define DB_FIELD_QT 5
#define BORDER_WID_INNER 8
#define BORDER_WID_TWIXT 4

typedef struct { GtkWidget* field[DB_FIELD_QT]; } FIELD_LIST;

enum { ID_COL, STATUS_COL, NAME_COL, LIST_COL_QT };

/* Main Button Callbacks */
void add_bug( void );
void change_status( gpointer b, gpointer data );
void modify_select_bug( gpointer b, gpointer data );
void open_reproduce_window( gpointer b, gpointer data );
void open_behave_window( gpointer b, gpointer data );

/* Menu Callbacks */
void menu_file_open( void );
void menu_file_close( void );

/* Dialoge Box Buttons */
void close_window(GtkWidget *widget, gpointer window);
void file_open_ok( GtkWidget *w, GtkFileSelection *fs );
void submit_bug( void );
void update_db( gpointer b, gchar* data );

/* Bug List Store Functions */
GtkWidget* init_list( void );
int load_open_datab( void* pArg, int argc, char** argv, char** columnNames );

/* Helpers and Wrappers */
GdkPixbuf* load_pixbuf( const gchar * filename );
