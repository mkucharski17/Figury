//
// Created by Michal on 08.11.2018.
//

#ifndef LAB1_QUADRANGLE_H
#define LAB1_QUADRANGLE_H
/*
 * class Quadrangle -use to represent 2D quadrangle
 * Main functions - create quadrangle and compute perimeter;
 */


class Quadrangle {

protected:
    int vertexes[4][2];
    double perimeter;
    double side1,side2,side3,side4;

public:
    Quadrangle(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4);
    double computePerimeter(double s1 , double s2, double s3, double s4);
    double computeSide(int xA, int yA, int xB,int yB);
    double getPermiter();



};


#endif //LAB1_QUADRANGLE_H
