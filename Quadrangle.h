//
// Created by Michal on 08.11.2018.
//

#ifndef LAB1_QUADRANGLE_H
#define LAB1_QUADRANGLE_H

#include <iostream>
#include "Point.h"

using namespace std;

/*
 * class Quadrangle -use to represent 2D quadrangle
 * Main functions - create quadrangle and compute perimeter;
 */

class Quadrangle {

protected:
    Point vertex[4];

public:
    Point getPoint(int i);
    double computeSide(Point A, Point B);
    void computePerimeter();
    Quadrangle(Point A, Point B, Point C, Point D);




};


#endif //LAB1_QUADRANGLE_H
