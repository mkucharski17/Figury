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
    double* getShift(double* shift);
    double& getAngle(double & angle);
    double& getscale(double & scale);
    Point* getVertexesToChange(Point * newVertexes, char* PointsToChange);
    char* getPointsToChange(char * PointsToChange);

protected:
    string name;
    Point vertex[4];

public:
    Point getPoint(int i);
    void setPoint(double x, double y,int i);
    double computeSide(Point A, Point B);
    void computePerimeter();
    virtual void computeArea();
    void symmetryX();
    void symmetryY();
    void symmetryO();
    void move();
    void rotate();
    void showCoordinates();
    Quadrangle(Point A, Point B, Point C, Point D);
    void symmetry();
    void scaling();
    void edit();
    void changeVertex(Point & newPoint, char & pointToChange);
    const string &getName() const;



};


#endif //LAB1_QUADRANGLE_H
