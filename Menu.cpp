//
// Created by Michal on 09.11.2018.
//

#include "Menu.h"



Menu::Menu() {
    int choice;
    Point coordinates[4];
    cout << "chose one from following figure or run automatic tests:" << endl << "1 - Quadrangle " << endl
         << "2 - Trapezoid " << endl;
    cout << "3 - Rhomboid " << endl << "4 - Rectangle " << endl << "5 - Automatic tests" << endl << "0 - Exit" << endl;
    cin >> choice;
    if (choice != 5) {
        askForCoordinates(coordinates);
        mode = 0;
    } else {
        setTestCoordinates(coordinates);
        mode = 1;

    }


    switch (choice) {

        case 1:
            quadrangle = new Quadrangle(coordinates[0], coordinates[1], coordinates[2], coordinates[3]);
            break;

        case 2:
            quadrangle = new Trapezoid(coordinates[0], coordinates[1], coordinates[2], coordinates[3]);
            break;

        case 3:
            quadrangle = new Rhomboid(coordinates[0], coordinates[1], coordinates[2], coordinates[3]);
            break;

        case 4:
            quadrangle = new Rectangle(coordinates[0], coordinates[1], coordinates[2], coordinates[3]);
            break;
        case 5:
            quadrangle = new Rectangle(coordinates[0], coordinates[1], coordinates[2], coordinates[3]);
            test = new Test(quadrangle);

        case 0:
            choice = 0;


    }
}

void Menu::askForCoordinates(Point *cor) {

    char letter = 'A';
    double x, y;
    for (int i = 0; i < 4; i++) {
        cout << "Write x" << char(letter + i) << ": ";
        cin >> x;
        cout << "Write y" << char(letter + i) << ": ";
        cin >> y;
        cor[i].setX(x);
        cor[i].setY(y);
    }
}

void Menu::setTestCoordinates(Point *testCor) {
    testCor[0].setX(1);
    testCor[0].setY(1);
    testCor[1].setX(4);
    testCor[1].setY(1);
    testCor[2].setX(4);
    testCor[2].setY(4);
    testCor[3].setX(1);
    testCor[3].setY(4);
}


void Menu::whatToDoMenu() {
    int whatToDoChoice = 1;
    while (whatToDoChoice != 0) {
        cout << "chose one from following options:" << endl << "1 - compute perimeter " << endl << "2 - compute area  "
             << endl << "3 - move figure " << endl << "4 - rotate figure " << endl << "5 - make symmetry" << endl
             << "6 - show coordinates" << endl << "7 - scale figure" << "8 - edit " << endl << "0 - exit " << endl;

        cin >> whatToDoChoice;


        switch (whatToDoChoice) {
            case 1:
                quadrangle->computePerimeter();
                break;

            case 2:
                quadrangle->computeArea();
                break;

            case 3:
                quadrangle->getShift();
                break;

            case 4:
                quadrangle->getAngle();
                break;

            case 5:
                quadrangle->symmetry();
                break;

            case 6:
                quadrangle->showCoordinates();
                break;
            case 7:
                quadrangle->getscale();
                break;
            case 8:
                quadrangle->edit();
                break;


            case 0:
                whatToDoChoice = 0;
                delete (quadrangle);


        }
    }


}

int Menu::getMode() const {
    return mode;
}

