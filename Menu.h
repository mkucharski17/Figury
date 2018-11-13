//
// Created by Michal on 09.11.2018.
//

#ifndef LAB1_MENU_H
#define LAB1_MENU_H


#include "Quadrangle.h"
#include "Trapezoid.h"
#include "Rhomboid.h"
#include "Rectangle.h"
#include "Test.h"

/*
 * class Menu - use as interface of this part of project
 * Main functions - communicate with user
 */

class Menu {
    Test *test;
    Quadrangle *quadrangle;
    int mode;

public:
    Menu();

    void askForCoordinates(Point *cor);

    void whatToDoMenu();

    void setTestCoordinates(Point *testCor);

    int getMode() const;


};


#endif //LAB1_MENU_H
