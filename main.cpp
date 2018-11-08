#include <iostream>
#include "Quadrangle.h"
#include "Trapezoid.h"
#include "Rhomboid.h"
#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle r = Rectangle(0,0,4,0,4,8,0,8);
    cout<<r.getPerimeter()<<endl<<r.getArea();


    return 0;
}