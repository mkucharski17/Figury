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

Point Quadrangle::getPoint(int i){
    return vertex[i];
}



