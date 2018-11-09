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


public:
    Trapezoid(Point A, Point B, Point C, Point D);
    double computeHeight(Point A, Point B , Point C);
    void computeArea();
};


#endif //LAB1_TRAPEZOID_H
