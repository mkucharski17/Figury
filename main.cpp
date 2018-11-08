#include <iostream>
#include "Quadrangle.h"

using namespace std;

int main() {
    Quadrangle q = Quadrangle(0,0,1,0,1,1,0,1);
    cout<<q.getPermiter();

    return 0;
}