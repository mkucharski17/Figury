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

    void showCoordinates();

    Quadrangle(Point A, Point B, Point C, Point D);

    void symmetry();

    void scaling(double scale);

    void edit();

    void changeVertex(Point &newPoint, char &pointToChange);

    void getShift();

    void getAngle();

    void getscale();

    Point *getVertexesToChange(Point *newVertexes, char *PointsToChange);

    char *getPointsToChange(char *PointsToChange);

    Point getVertex(int i);


};


#endif //LAB1_QUADRANGLE_H
