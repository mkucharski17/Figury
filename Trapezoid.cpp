//
// Created by Michal on 08.11.2018.
//

#include "Trapezoid.h"
#include <cmath>

Trapezoid::Trapezoid(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4):Quadrangle(x1,x2,y1,y2,x3,y3,x4,y4) {
    vertexes[0][0] = x1;
    vertexes[0][1] = y2;
    vertexes[1][0] = x2;
    vertexes[1][1] = y2;
    vertexes[2][0] = x3;
    vertexes[2][1] = y3;
    vertexes[3][0] = x4;
    vertexes[3][1] = x4;

    base1 = computeSide(x1,y1,x2,y2);
    side1 = computeSide(x2,y2,x3,y3);
    base2 = computeSide(x3,y3,x4,y4);
    side2 = computeSide(x4,y4,x1,y1);
    perimeter = computePerimeter(side1,side2,base1,base2);
    height = computeHeight(x1,y1,x2,y2,x3,y3);
    area = computeArea(base1,base2,height);

}

double Trapezoid::computeArea(double b1, double b2, double h){
    return (b1+b2)*h/2;
}

double Trapezoid::computeHeight(int x1, int y1, int x2, int y2, int x3, int y3)  {
    double A,B,C;
    /*
     * use formula (y-y1)(x2-x1)-(y2-y1)(x-x1 = 0)
     */
    A = y1-y2;
    B = x2-x1;
    C = -y1*x2+x1*y1+y2*x1-x1*y1;
    /*
     * use formula d = |Axp +Bxp + C|/(A^2 +b^2)^1/2
     */
    return fabs(A*x3 + B*y3 + C)/sqrt(pow(A,2)+pow(B,2));
}

double Trapezoid::getArea()  {
    return area;
}

