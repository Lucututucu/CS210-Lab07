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

int main(void) {
    //Initialize variables
    int x;
    int y;
    int location;

    //Accept input
    printf("Enter the x and y values of a point: ");
    scanf(" %d %d", &x, &y);

    //Process Input
    location = quadrantOfPoint(x, y);

    //Display result
    printf("The point (%d, %d) is ", x, y);
    if (0 < location){
        printf("in quadrant %d.\n", location);
    } else {
        printf("on the ");
        if (location == 0) {
            printf("origin.\n");
        } else if (location == -1) {
            printf("X-axis.\n");
        } else {
            printf("Y-axis.\n");
        }
    }   
    return 0;
}