//
// Created by Michal on 09.11.2018.
//

#include "Point.h"

Point::Point(int xP , int yP): x(xP),y(yP){}

int Point::getX() const {
    return x;
}

void Point::setX(int x) {
    Point::x = x;
}

int Point::getY() const {
    return y;
}

void Point::setY(int y) {
    Point::y = y;
}

Point::Point() {}


