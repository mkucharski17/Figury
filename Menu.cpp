//
// Created by Michal on 09.11.2018.
//

#include "Menu.h"


Menu::Menu(){
    int choice;
    Point coordinates[4];
    cout<<"chose one from following figure:"<<"1 - random Quadrangle "<<endl<<"2 - Trapezoid "<<endl;
    cout<<"3 - Rhomboid "<<endl<<"4 - Rectangle "<<endl<<"0 - Exit";
    cin>>choice;
    askForCoordinates(coordinates);





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

            case 0:
                choice = 0;



    }
}

void Menu::askForCoordinates(Point* cor) {

    char letter = 'A';
    double x,y;
    for (int i = 0; i < 4 ; i++) {
        cout<<"Write x"<<char(letter+i)<<": ";cin>>x;
        cout<<"Write y"<<char(letter+i)<<": ";cin>>y;
        cor[i].setX(x);
        cor[i].setY(y);
    }
}

void Menu::whatToDoMenu() {
    int whatToDoChoice;
    cout<<"chose one from following options:"<<"1 - compute perimeter "<<endl<<"2 - compute area  "<<endl
    <<"3 - move figure "<<endl<<"4 - rotate figure "<<endl<<"5 - make symmetry"<<endl<<"0 - Exit";
    cin>>whatToDoChoice;


        switch(whatToDoChoice){
            case 1: quadrangle->computePerimeter();

            case 2: quadrangle->computeArea();


            case 5: quadrangle->symmetry();


        }



}