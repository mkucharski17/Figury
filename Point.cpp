//
// Created by Michal on 09.11.2018.
//



#include "Point.h"

Point::Point(double xP , double yP): x(xP),y(yP){}


Point::Point() {}

double Point::getX() const {
    return x;
}

void Point::setX(double x) {
    Point::x = x;
}

double Point::getY() const {
    return y;
}

void Point::setY(double y) {
    Point::y = y;
}


