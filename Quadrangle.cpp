//
// Created by Michal on 08.11.2018.
//

#include "Quadrangle.h"
#include <cmath>

Quadrangle::Quadrangle(Point A, Point B, Point C, Point D) {
    vertex[0] = A;
    vertex[1] = B;
    vertex[2] = C;
    vertex[3] = D;
    name = "Quadrangle";
}

Point Quadrangle::getPoint(int i) {
    return vertex[i];
}

double Quadrangle::computeSide(Point a, Point b) {
    return sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2));
}

void Quadrangle::computePerimeter() {

    double perimeter = 0;

    for (int i = 0; i < 3; i++)

        perimeter += computeSide(vertex[i], vertex[i + 1]);

    perimeter += computeSide(vertex[3], vertex[0]);

    cout<<perimeter;

}

void Quadrangle::setPoint(int  x, int y , int i) {
    vertex[i].setX(x);
    vertex[i].setY(y);
}

void Quadrangle::symmetryX() {

    for(int i = 0 ; i < 4 ; i++)
        vertex[i].setY(-vertex[i].getY());

}

void Quadrangle::symmetryY() {

    for(int i = 0 ; i < 4 ; i++)
        vertex[i].setX(-vertex[i].getX());

}

void Quadrangle::symmetryO() {

    for(int i = 0 ; i < 4 ; i++) {
        vertex[i].setX(-vertex[i].getX());
        vertex[i].setY(-vertex[i].getY());
    }
}

void Quadrangle::move(int vX, int vY) {
    for(int i = 0 ; i < 4 ; i++){
        vertex[i].setX(vertex[i].getX() + vX);
        vertex[i].setY(vertex[i].getY() + vY)
    }
}

void Quadrangle::rotate(double angle) {
    for(int i = 0 ; i < 4 ; i++){
        int x , y , x2 ,y2;
        x = vertex[i].getX();
        y = vertex[i].getY();

        x2 = x*cos(angle) - y*sin(angle);
        y2 = y*sin(angle) + y*cos(angle);

        vertex[i].setX(x2);
        vertex[i].setY(y2);

    }

}



void Quadrangle::showCoordinates() {
    char a = 'A';
    for(int i = 0 ; i < 4 ; i++){
        cout<<"vertex " <<char(a+i)<<" : ("<<vertex[i].getX();
        cout<<", "<<vertex[i].getY()<<")"<<endl;
    }

}








