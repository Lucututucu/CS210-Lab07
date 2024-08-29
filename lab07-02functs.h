#ifndef LAB07FUNCTS_H
#define LAB07FUNCTS_H

#define ON_X_AXIS -1
#define ON_Y_AXIS -2
#define ON_ORIGIN 0
/** 
 * @brief Finds the quadrant or other location of a point given the coordinates
 * @param x the X coordinate of the point
 * @param y the Y coordinate of the point
 * @return the location of the point. Either a quadrant, axis, or the origin.
 */ 
//type name(type parameter...);
int quadrantOfPoint(int x, int y);

#endif