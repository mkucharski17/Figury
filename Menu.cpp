//
// Created by Michal on 09.11.2018.
//

#include "Menu.h"


Menu::Menu() {
    int choice = 1;
    Point coordinates[4];
    while(choice != 0) {
        cout << "chose one from following figure or run automatic tests:" << endl << "1 - Quadrangle " << endl
             << "2 - Trapezoid " << endl;
        cout << "3 - Rhomboid " << endl << "4 - Rectangle " << endl << "5 - Automatic tests" << endl << "0 - Exit"
             << endl;
        cin >> choice;
        if (choice != 5 && choice != 0) {
            askForCoordinates(coordinates);
            mode = 0;
        } else {
            setTestCoordinates(coordinates);
            mode = 1;

        }


        switch (choice) {

            case 1:
                quadrangle = new Quadrangle(coordinates[0], coordinates[1], coordinates[2], coordinates[3]);
                whatToDoMenu();
                break;

            case 2:
                quadrangle = new Trapezoid(coordinates[0], coordinates[1], coordinates[2], coordinates[3]);
                whatToDoMenu();
                break;

            case 3:
                quadrangle = new Rhomboid(coordinates[0], coordinates[1], coordinates[2], coordinates[3]);
                whatToDoMenu();
                break;

            case 4:
                quadrangle = new Rectangle(coordinates[0], coordinates[1], coordinates[2], coordinates[3]);
                whatToDoMenu();
                break;
            case 5:
                quadrangle = new Rectangle(coordinates[0], coordinates[1], coordinates[2], coordinates[3]);
                test = new Test(quadrangle);
                break;

            case 0:
                choice = 0;


        }
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
             << endl << "3 - move figure " << endl << "4 - rotate figure with respect to point (0,0) " << endl
             << "5 - make symmetry" << endl << "6 - show coordinates" << endl << "7 - scale figure" << endl
             << "8 - edit " << endl << "0 - exit " << endl;

        cin >> whatToDoChoice;


        switch (whatToDoChoice) {
            case 1:
                showPerimeter();
                break;

            case 2:
                showArea();
                break;

            case 3:
                getShift();
                break;

            case 4:
                getAngle();
                break;

            case 5:
                chooseSymmetry();
                break;

            case 6:
                quadrangle->showCoordinates();
                break;
            case 7:
                getscale();

                break;
            case 8:
                editChoice();
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

void Menu::getscale() {
    double scale;
    cout << "write scale: " << endl;
    cin >> scale;
    quadrangle->scaling(scale);

}


void Menu::getShift() {
    double shift[2];
    cout << "write X shift: ";
    cin >> shift[0];
    cout << "write Y shift: ";
    cin >> shift[1];
    quadrangle->move(shift);
}

void Menu::getAngle() {
    double angle;
    cout << "write an angle: " << endl;
    cin >> angle;
    quadrangle->rotate(angle);

}


void Menu::chooseSymmetry() {
    int symmetryChoice;
    cout << "chose one from following options:" << "1 - symmetry with respect to X-axis " << endl
         << "2 - symmetry with respect to Y-axis s  " << endl << "3 - symmetry with respect to point O(0,0)";
    cin >> symmetryChoice;


    switch (symmetryChoice) {
        case 1:
            quadrangle->symmetryX();
            break;

        case 2:
            quadrangle->symmetryY();
            break;

        case 3:
            quadrangle->symmetryO();
    }
}

void Menu::showPerimeter() {
    cout<<"Perimeter = "<<quadrangle->computePerimeter();
}

void Menu::showArea(){
    cout<<"Area = "<< quadrangle->computeArea();
}


char *Menu::getPointsToChange(char *PointsToChange) {
    cout << "write letter of first point which you want to change: " << endl;
    cin >> PointsToChange[0];
    cout << "write letter of second point which you want to change: " << endl;
    cin >> PointsToChange[1];
    return PointsToChange;

}


Point *Menu::getVertexesToChange(Point *newVertexes, char *PointsToChange) {
    double x1, x2, y1, y2;
    cout << "write new coordinates for point " << PointsToChange[0] << ":" << endl << "x = :";
    cin >> x1;
    cout << "y = ";
    cin >> y1;
    cout << "write new coordinates for point " << PointsToChange[1] << ":" << endl << "x = :";
    cin >> x2;
    cout << "y = ";
    cin >> y2;
    newVertexes[0].setX(x1);
    newVertexes[0].setY(y1);
    newVertexes[1].setX(x2);
    newVertexes[1].setY(y2);
    return newVertexes;

}

void Menu::editChoice() {
    Point newVertexes[2];
    char PointsToChange[2];
    getPointsToChange(PointsToChange);
    getVertexesToChange(newVertexes, PointsToChange);
    quadrangle->changeVertex(newVertexes[0], PointsToChange[0]);
    quadrangle->changeVertex(newVertexes[1], PointsToChange[1]);
}

