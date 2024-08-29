/**
* ===========================================================
*    Name: Lucas Briggs
* Section: T1/2 Kloenne
* Project: Lab07 02
* Purpose: Practice more conditional statements.
* ===========================================================
*/
//Remember any includes and defines
#include <stdio.h>
#include "lab07-02functs.h"

//type name(type parameter...) {}
int quadrantOfPoint(int x, int y) {
    //Determine relation to x-axis
    if (0 == x) { //Check for x-axis
        if (y == 0) { //Check for origin.
            return ON_ORIGIN;
        } else {
            return ON_Y_AXIS;
        }
    } else if (y == 0) { //Check for x-axis
        return ON_X_AXIS;
    } else if (0 < x) { //Check for positive x quadrants
        if (0 < y) {
            return 1;
        } else {
            return 4;
        }
    } else { //Must be in negative x quadrant.
        if (0 < y) {
            return 2;
        } else {
            return 3;
        }
    }
}