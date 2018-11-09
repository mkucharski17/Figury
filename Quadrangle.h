//
// Created by Michal on 08.11.2018.
//

#ifndef LAB1_QUADRANGLE_H
#define LAB1_QUADRANGLE_H

#include "Point.h"

/*
 * class Quadrangle -use to represent 2D quadrangle
 * Main functions - create quadrangle and compute perimeter;
 */


class Quadrangle {

protected:
    Point vertex[4];
    double perimeter;
    double side1,side2,side3,side4;

public:
    Point getPoint(int i);

    Quadrangle(Point A, Point B, Point C, Point D);




};


#endif //LAB1_QUADRANGLE_H
