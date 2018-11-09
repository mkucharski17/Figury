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


    Trapezoid t = Trapezoid(p1,p2,p3,p4);
    cout<<"perimter =";t.computePerimeter();
    cout<<endl<<"area ="; t.computeArea();


    return 0;
}