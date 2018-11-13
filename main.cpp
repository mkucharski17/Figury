#include <iostream>
#include "Menu.h"


using namespace std;

int main() {
    Menu m = Menu();
    if (m.getMode() != 1)
        m.whatToDoMenu();


    return 0;
}