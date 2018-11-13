//
// Created by Michal on 12.11.2018.
//
#include <math.h>
#include "Test.h"

Test::Test(Quadrangle *quad) : quadrangle(quad) {
    editTest();
    rotateTest();
    moveTest();
    symmetryTest();
    scalingTest();
}

void Test::editTest() {
    cout << "Marek creates rectangle with following vertexes : " << endl;
    quadrangle->showCoordinates();
    cout << "He changes vertex B into (5,1) and vertex C into (5,4)" << endl;
    char pointsToChange[2] = {'B', 'C'};
    Point newVertexes[2];
    for (int i = 0, j = 1; i < 2; i++, j += 3) {
        newVertexes[i].setX(5);
        newVertexes[i].setY(j);
        quadrangle->changeVertex(newVertexes[i], pointsToChange[i]);
    }
    if(quadrangle->getVertex(1).getX() != 5 || quadrangle->getVertex(1).getY() != 1 )
        cout<<"Wrong setting vertex B";
    else if (quadrangle->getVertex(2).getX() != 5 || quadrangle->getVertex(2).getX() != 4 )
        cout<<"Wrong setting vertex C";
    else{
    cout << "New correctly rectangle vertexes are: " << endl;
    quadrangle->showCoordinates();
    }

}

void Test::rotateTest() {
    double angle = M_PI / 2;
    cout << "User creates rectangle which perimeter = 12 with following vertexes: " << endl;
    quadrangle->showCoordinates();
    cout << "User makes 90 degrees rotation with respect to point (0,0)" << endl;
    quadrangle->rotate(angle);
    if(quadrangle->computePerimeter() != 14)
        cout<<"error in computing perimeter";
    else {
        cout << "New rectangle's perimeter also equals 12 and it's vertexes are:" << endl;
        quadrangle->showCoordinates();
    }


}

void Test::symmetryTest() {
    int error = 0;
    cout << "Customer creates rectangle with following vertexes: " << endl;
    quadrangle->showCoordinates();
    Quadrangle * tempQuadrangle = quadrangle;
    cout << "Customer makes symmetry with respect to Y-axis" << endl;
    quadrangle->symmetryY();
    for(int i = 0 ; i < 0 ; i++){
        if(quadrangle->getVertex(i).getX() != -tempQuadrangle->getVertex(i).getX()) {
            cout << "symmetry with respect to Y-axis is not properly";
            error++;
        }
    }
    if(error == 0) {
        cout << "New rectangle vertexes are:" << endl;
        quadrangle->showCoordinates();
    }


}

void Test::moveTest() {
    double shift[2] = {8, 6};
    int error = 0;
    cout << "Marta creates rectangle with following vertexes: " << endl;
    quadrangle->showCoordinates();
    Quadrangle * tempQuadrangle = quadrangle;
    cout << "She moves vector along vector (8,6)" << endl;
    quadrangle->move(shift);
    for(int i = 0 ; i < 0 ; i++){
        if(quadrangle->getVertex(i).getX() != tempQuadrangle->getVertex(i).getX() + shift[0]) {
            cout << "Wrong changes in x coordinate";
            error++;
        }
        if(quadrangle->getVertex(i).getY() != tempQuadrangle->getVertex(i).getY() + shift[1]) {
            cout << "Wrong changes in Y coordinate";
            error++;
        }
    }
    if(error == 0 ) {
        cout << "New rectangle vertexes are:" << endl;
        quadrangle->showCoordinates();
    }
}

void Test::scalingTest() {
    int error = 0;
    cout << "Stasio creates rectangle with following vertexes: " << endl;
    quadrangle->showCoordinates();
    Quadrangle * tempQuadrangle = quadrangle;
    cout << "He scales rectangle with scale = 4" << endl;
    quadrangle->scaling(4);
    for(int i = 0 ; i < 0 ; i++) {
        if (quadrangle->getVertex(i).getX() != 4 * tempQuadrangle->getVertex(i).getX()) {
            cout << "Scaling is not working correctly on X coordinate";
            error++;
        }
        if (quadrangle->getVertex(i).getY() != 4 * tempQuadrangle->getVertex(i).getY()) {
            cout << "Scaling is not working correctly on X coordinate";
            error++;
        }
    }
    if(error == 0) {
        cout << "Stasio's rectangle's vertexes after good scaling are:" << endl;
        quadrangle->showCoordinates();
    }
}


