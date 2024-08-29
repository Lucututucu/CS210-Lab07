/**
* ===========================================================
*    Name: Lucas Briggs 26 Aug 2024 
* Section: T1/2 Kloenne
* Project: Lab07 01
* Purpose: Practice conditional statements.
* ===========================================================
*/
//Remember any includes and defines
#include <stdio.h>
#define SQUAD_BREAK 24

//Create
int displayResidenceHall(int squad) {
    //Determine good input
    if ((0 < squad) && (squad < 41)) {
        printf("Squadron %d is in ", squad);
        //Determine Hall
        if (squad < SQUAD_BREAK) {
            printf("Vandy.\n");
        } else {
            printf("Sijan.\n");
        }
        return 0;
    } else {
        // Produce 'error message' for bad input
        printf("No such squadron exists (%d).\n", squad);
        return 1;
    }
}
