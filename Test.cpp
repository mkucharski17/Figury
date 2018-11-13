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
    cout << "these are vertexes before editing: " << endl;
    quadrangle->showCoordinates();
    char pointsToChange[2] = {'B', 'C'};
    Point newVertexes[2];
    for (int i = 0, j = 1; i < 2; i++, j += 3) {
        newVertexes[i].setX(5);
        newVertexes[i].setY(j);
        quadrangle->changeVertex(newVertexes[i], pointsToChange[i]);
    }
    cout << "these are vertexes after changing vertex B to (5,0) and C to (5,4)" << endl;
    quadrangle->showCoordinates();

}

void Test::rotateTest() {
    double angle = M_PI / 2;
    quadrangle->rotate(angle);
    cout << "these are vertexes after 90 degrees rotation with respect to point (0,0)" << endl;
    quadrangle->showCoordinates();


}

void Test::symmetryTest() {
    quadrangle->symmetryY();
    cout << "these are vertexes after symmetry with respect to Y-axis" << endl;
    quadrangle->showCoordinates();


}

void Test::moveTest() {
    double shift[2] = {8, 6};
    quadrangle->move(shift);
    cout << "these are vertexes after moving along vector (8,6)" << endl;
    quadrangle->showCoordinates();

}

void Test::scalingTest() {
    quadrangle->scaling(4);
    cout << "these are vertexes after scaling with scale = 4 " << endl;
    quadrangle->showCoordinates();

}


