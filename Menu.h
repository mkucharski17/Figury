//
// Created by Michal on 09.11.2018.
//

#ifndef LAB1_MENU_H
#define LAB1_MENU_H


#include "Quadrangle.h"
#include "Trapezoid.h"
#include "Rhomboid.h"
#include "Rectangle.h"

/*
 * class Menu - use as interface of this part of project
 * Main functions - communicate with user
 */

class Menu {
    Quadrangle* quadrangle;

public:
    Menu();
    void askForCoordinates(Point* cor);
    void whatToDoMenu();



};


#endif //LAB1_MENU_H
