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

    cout << perimeter;

}

void Quadrangle::setPoint(double x, double y, int i) {
    vertex[i].setX(x);
    vertex[i].setY(y);
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

void Quadrangle::move() {
    double shift[2];
    getShift(shift);

    for (int i = 0; i < 4; i++) {
        vertex[i].setX(vertex[i].getX() + shift[0]);
        vertex[i].setY(vertex[i].getY() + shift[1]);
    }
}

void Quadrangle::rotate() {
    double angle = 0;
    getAngle(angle);

    for (int i = 0; i < 4; i++) {
        double x, y, x2, y2;
        x = vertex[i].getX();
        y = vertex[i].getY();

        x2 = x * cos(angle) - y * sin(angle);
        y2 = y * sin(angle) + y * cos(angle);

        vertex[i].setX(x2);
        vertex[i].setY(y2);
    }
}

void Quadrangle::computeArea() {}

void Quadrangle::showCoordinates() {
    char a = 'A';
    for (int i = 0; i < 4; i++) {
        cout << "vertex " << char(a + i) << " : (" << vertex[i].getX();
        cout << ", " << vertex[i].getY() << ")" << endl;
    }
}

void Quadrangle::symmetry() {
    int symmetryChoice;
    cout << "chose one from following options:" << "1 - symmetry with respect to X-axis " << endl
         << "2 - symmetry with respect to Y-axis s  " << endl << "3 - symmetry with respect to point O(0,0)";
    cin >> symmetryChoice;


    switch (symmetryChoice) {
        case 1:
            symmetryX();
            break;

        case 2:
            symmetryY();
            break;

        case 3:
            symmetryO();
    }
}

double *Quadrangle::getShift(double *shift) {
    cout << "write X shift: ";
    cin >> shift[0];
    cout << "write Y shift: ";
    cin >> shift[1];
    return shift;

}

double& Quadrangle::getAngle(double &angle) {
    cout<<"write an angle: ";
    cin>>angle;
    return angle;

}

const string &Quadrangle::getName() const {
    return name;
}








