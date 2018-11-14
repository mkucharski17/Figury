//
// Created by Michal on 12.11.2018.
//

#ifndef LAB1_TEST_H
#define LAB1_TEST_H


#include "Quadrangle.h"
/*
 * class Menu - use to check why methods do not work properly
 * Main functions - make tests for all functions of program
 */


class Test {
    Quadrangle *quadrangle;
public:
    explicit Test(Quadrangle *quad);

    void editTest();

    void scalingTest();

    void rotateTest();

    void symmetryTest();

    void moveTest();

    void runTests();


};


#endif //LAB1_TEST_H
