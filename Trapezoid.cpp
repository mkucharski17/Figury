//
// Created by Michal on 08.11.2018.
//

#include "Trapezoid.h"
#include <cmath>

Trapezoid::Trapezoid(Point A, Point B, Point C, Point D):Quadrangle(A,B,C,D) {}

void Trapezoid::computeArea() {
    double base1 = computeSide(vertex[0], vertex[1]);
    double base2 = computeSide(vertex[2], vertex[3]);
    double height = computeHeight(vertex[0], vertex[1] , vertex[2]);
    double area = (base1+base2)*height/2;
    cout<<area;

}

double Trapezoid::computeHeight(Point A, Point B, Point C) {
    double a,b,c,height;

    //use formula (y-y1)(x2-x1)-(y2-y1)(x-x1 = 0)
    a = A.getY()-B.getY();
    b = B.getX()- A.getX();
    c =-A.getY()*B.getX() + A.getX()*A.getY() + B.getY()*A.getX() - A.getX()*A.getY();

    //  use formula d = |Axp +Bxp + C|/(A^2 +b^2)^1/2
    height = fabs(a*C.getX() + b*C.getY() + c)/sqrt(pow(a,2) + pow(b,2));

    return height;

}


