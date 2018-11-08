//
// Created by Michal on 08.11.2018.
//

#include "Rectangle.h"

Rectangle::Rectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) : Rhomboid(x1,x2,y1,y2,x3,y3,x4,y4){
    side1 = computeSide(x1,y1,x2,y2);
    side2 = computeSide(x2,y2,x3,y3);
    perimeter = computePerimeter(side1,side2);
    area = computeArea(side1,side2);

}
