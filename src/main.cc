/****************************************************************************
 *                                                                          *
 *  Author : lukasz.iwaszkiewicz@gmail.com                                  *
 *  ~~~~~~~~                                                                *
 *  License : see COPYING file for details.                                 *
 *  ~~~~~~~~~                                                               *
 ****************************************************************************/

#include <GtkForms.h>
#include <Tiliae.h>
#include <gtk/gtk.h>

//// TODO czemu to musi tu być? Czemu tiliaeparser zamienia bool na to _Bool?
#define _Bool bool
#include "Reflection_output.cc.h"
#include "Reflection_output_gtkforms.cc.h"
#include "Reflection_output_tiliae.cc.h"

int main (int argc, char **argv)
{
        srand (time (0));
        gtk_init (&argc, &argv);
        GtkForms::App app;
        app.init ("config.xml", "mainController");
        gtk_main ();
}

/*
 * - Wszystkie typy wariantów -> zwykła kolumna z GtkCellRendererText
 * - Różne typy wariantów, ale mapowanie na inne właściwości (bold, strike etc).
 * - Inne renderery.
 */
