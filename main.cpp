#include <iostream>
#include "Quadrangle.h"
#include "Trapezoid.h"

using namespace std;

int main() {
    Trapezoid t = Trapezoid(0,0,4,0,3,1,1,1);
    cout<<t.getPermiter()<<endl<<t.getArea();


    return 0;
}