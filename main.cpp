#include <iostream>
#include "Point.h"
#include "Quadrangle.h"
#include "Rectangle.h"


using namespace std;

int main() {
    Point p1 = Point(0, 0);
    Point p2 = Point(4, 0);
    Point p3 = Point(3, 1);
    Point p4 = Point(1, 1);
    Quadrangle* q = new Rectangle(p1,p2,p3,p4);

    q->showCoordinates();





    return 0;
}