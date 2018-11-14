//
// Created by Michal on 08.11.2018.
//

#ifndef LAB1_QUADRANGLE_H
#define LAB1_QUADRANGLE_H

#include <iostream>
#include "Point.h"

using namespace std;

/*
 * class Quadrangle - use to represent 2D quadrangle
 * Main functions - create quadrangle and compute perimeter, make symmetry
 */

class Quadrangle {

protected:
    Point vertex[4];

public:


    double computeSide(Point A, Point B);

    double computePerimeter();

    virtual double computeArea();

    void symmetryX();

    void symmetryY();

    void symmetryO();

    void move(double *shift);

    void rotate(double angle);


    Quadrangle(Point A, Point B, Point C, Point D);


    void showCoordinates();


    void scaling(double scale);


    void changeVertex(Point &newPoint, char &pointToChange);


    Point getVertex(int i);


};


#endif //LAB1_QUADRANGLE_H
