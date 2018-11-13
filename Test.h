//
// Created by Michal on 12.11.2018.
//

#ifndef LAB1_TEST_H
#define LAB1_TEST_H


#include "Quadrangle.h"

class Test {
    Quadrangle *quadrangle;
public:
    explicit Test(Quadrangle *quad);

    void editTest();

    void scalingTest();

    void rotateTest();

    void symmetryTest();

    void moveTest();


};


#endif //LAB1_TEST_H
