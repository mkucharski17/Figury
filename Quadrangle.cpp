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
}

double Quadrangle::computeSide(Point a, Point b) {
    return sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2));
}

double Quadrangle::computePerimeter() {

    double perimeter = 0;

    for (int i = 0; i < 3; i++)

        perimeter += computeSide(vertex[i], vertex[i + 1]);

    perimeter += computeSide(vertex[3], vertex[0]);

    return perimeter;

}

void Quadrangle::symmetryX() {

    for (int i = 0; i < 4; i++)
        vertex[i].setY(-vertex[i].getY());

}

void Quadrangle::symmetryY() {

    for (int i = 0; i < 4; i++)
        vertex[i].setX(-vertex[i].getX());

}

void Quadrangle::symmetryO() {

    for (int i = 0; i < 4; i++) {
        vertex[i].setX(-vertex[i].getX());
        vertex[i].setY(-vertex[i].getY());
    }
}

double Quadrangle::computeArea() {}


void Quadrangle::move(double *shift) {

    for (int i = 0; i < 4; i++) {
        vertex[i].setX(vertex[i].getX() + shift[0]);
        vertex[i].setY(vertex[i].getY() + shift[1]);
    }
}


void Quadrangle::rotate(double angle) {

    for (int i = 0; i < 4; i++) {
        double x, y, x2, y2;
        x = vertex[i].getX();
        y = vertex[i].getY();

        x2 = x * cos(angle) - y * sin(angle);
        y2 = x * sin(angle) + y * cos(angle);

        vertex[i].setX(x2);
        vertex[i].setY(y2);
    }
}


void Quadrangle::scaling(double scale) {

    for (int i = 0; i < 4; i++) {
        vertex[i].setX(vertex[i].getX() * scale);
        vertex[i].setY(vertex[i].getY() * scale);
    }
}


void Quadrangle::changeVertex(Point &newPoint, char &pointTochange) {
    char letter = 'A';
    for (int i = 0; i < 4; i++, letter++) {
        if (char(letter) == pointTochange){
            vertex[i].setX(newPoint.getX());
            vertex[i].setY(newPoint.getY());
        }
    }

}



 Point Quadrangle::getVertex(int i){
    return vertex[i];
}


void Quadrangle::showCoordinates() {
    char letter = 'A';
    for (int i = 0; i < 4; i++) {
        cout << "vertex " << char(letter + i) << " : (" <<vertex[i].getX();
        cout << ", " << vertex[i].getY() << ")" << endl;
    }
}












