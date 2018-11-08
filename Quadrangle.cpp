//
// Created by Michal on 08.11.2018.
//

#include "Quadrangle.h"
#include <math.h>

Quadrangle::Quadrangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    vertexes[0][0] = x1;
    vertexes[0][1] = y2;
    vertexes[1][0] = x2;
    vertexes[1][1] = y2;
    vertexes[2][0] = x3;
    vertexes[2][1] = y3;
    vertexes[3][0] = x4;
    vertexes[3][1] = x4;

    side1 = computeSide(x1,y1,x2,y2);
    side2 = computeSide(x2,y2,x3,y3);
    side3 = computeSide(x3,y3,x4,y4);
    side4 = computeSide(x4,y4,x1,y1);
    perimeter = computePerimeter(side1,side2,side3,side4);

}

double Quadrangle::computeSide(int xA, int yA, int xB, int yB) {

    return sqrt(pow((xA - xB),2) + pow((yA - yB),2));
}

double Quadrangle::computePerimeter(double s1, double s2, double s3, double s4) {
    return s1+s2+s3+s4;
}

double Quadrangle::getPermiter() {
    return perimeter;
}

