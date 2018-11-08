//
// Created by Michal on 08.11.2018.
//

#ifndef LAB1_TRAPEZOID_H
#define LAB1_TRAPEZOID_H


#include "Quadrangle.h"

/*
 * class Trapezoid - use to represent 2D Trapezoid
 * Main functions - create trapezoid,compute area
 */

class Trapezoid : public Quadrangle {

    double base1,base2,height;
    double area;

public:
    Trapezoid(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
    double computeArea(double b1, double b2, double h);
    double computeHeight();

};


#endif //LAB1_TRAPEZOID_H
