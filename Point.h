//
// Created by Michal on 09.11.2018.
//

#ifndef LAB1_POINT_H
#define LAB1_POINT_H

/*
 * class Point - use to represents one point on plane
 * Main functions -  create point  , change coordinates,
 */


class Point {

    double x;
    double y;

public:
    Point() ;

    Point(double xP, double  yP);

    double getX() const;

    void setX(double x);

    double getY() const;

    void setY(double y);
};



#endif //LAB1_POINT_H
