#include <iostream>
#include "Quadrangle.h"
#include "Trapezoid.h"
#include "Rhomboid.h"

using namespace std;

int main() {
    Rhomboid r = Rhomboid(0,0,4,0,5,1,1,1);
    cout<<r.getPerimeter()<<endl<<r.getArea();


    return 0;
}