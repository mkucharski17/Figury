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
    else if (quadrangle->getVertex(2).getX() != 5 || quadrangle->getVertex(2).getY() != 4 )
        cout<<"Wrong setting vertex C";
    else{
    quadrangle->showCoordinates();
    }

}

void Test::rotateTest() {
    double angle = M_PI / 2;
    cout << "then Marek makes 90 degrees rotation with respect to point (0,0) and he"
            " hope that it won't change perimeter"<<endl;
    quadrangle->rotate(angle);
    if(quadrangle->computePerimeter() != 14)
        cout<<"error in computing perimeter";
    else {
        cout << "Fortunately new rectangle's perimeter also equals 14 and it's vertexes are:" << endl;
        quadrangle->showCoordinates();
    }


}

void Test::moveTest() {
    double shift[2] = {8, 6};
    int error = 0;
    Quadrangle * tempQuadrangle = quadrangle;
    cout << "Next step he makes is moving rectangle  along vector (8,6)" << endl;
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
        cout << "It goes well so new rectangle's vertexes are:" << endl;
        quadrangle->showCoordinates();
    }
}

void Test::symmetryTest() {
    int error = 0;
    Quadrangle * tempQuadrangle = quadrangle;
    cout << "After one minute of thinking Marek decide to make symmetry with respect to Y-axis" << endl;
    quadrangle->symmetryY();
    for(int i = 0 ; i < 0 ; i++){
        if(quadrangle->getVertex(i).getX() != -tempQuadrangle->getVertex(i).getX()) {
            cout << "symmetry with respect to Y-axis is not properly";
            error++;
        }
    }
    if(error == 0) {
        cout << "This action changes his rectangle's vertexes to:" << endl;
        quadrangle->showCoordinates();
    }


}



void Test::scalingTest() {
    int error = 0;
    Quadrangle * tempQuadrangle = quadrangle;
    cout << "Last idea which he come up with is scaling rectangle with scale = 4" << endl;
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
        cout << "After this He is very happy because it's also goes well and Finally his Rectangle vertexes are::" << endl;
        quadrangle->showCoordinates();
    }
}


