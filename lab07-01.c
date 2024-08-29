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
#include "lab07-01functs.h"

int main(void) {
    //Initialize variables
    int cadetSquad;

    //Accept input
    printf("Enter a squadron number: ");
    scanf(" %d", &cadetSquad);

    //Call function
    displayResidenceHall(cadetSquad);

    return 0;
}
