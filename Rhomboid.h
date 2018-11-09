//
// Created by Michal on 08.11.2018.
//

#ifndef LAB1_RHOMBOID_H
#define LAB1_RHOMBOID_H

/*
 * class Rhomboid - use to represents 2D rhomboid
 * Main Functions - create rhomboid
 */
#include "Trapezoid.h"

class Rhomboid: public Trapezoid{

public:
    Rhomboid(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
};



#endif //LAB1_RHOMBOID_H
