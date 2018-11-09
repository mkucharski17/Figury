//
// Created by Michal on 09.11.2018.
//

#ifndef LAB1_POINT_H
#define LAB1_POINT_H


class Point {

    int x;
    int y;

public:
    Point();

    Point(int xP, int yP);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);
};




#endif //LAB1_POINT_H
