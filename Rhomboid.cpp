//
// Created by Michal on 08.11.2018.
//

#include "Rhomboid.h"

Rhomboid::Rhomboid(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4):Trapezoid(x1,x2,y1,y2,x3,y3,x4,y4) {

    side1 = computeSide(x1,y1,x2,y2);
    side2 = computeSide(x2,y2,x3,y3);
    side3 = side1;
    side4 = side2;
    perimeter = computePerimeter(side1,side2);
    height = computeHeight(x1,y1,x2,y2,x3,y3);
    area = computeArea(side1,height);

}

double Rhomboid::computeArea(double s1, double h) {
    return s1*h;
}

double Rhomboid::computePerimeter(double s1, double s2) {
    return 2*s1 + 2*s2;
}