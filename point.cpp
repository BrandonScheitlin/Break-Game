#include "gLibrary.h"


    Point::Point(double xVal, double yVal)
    {
        x = xVal;
        y = yVal;
    }
    double Point::getX() const
    {
        return x;
    }
    double Point::getY() const
    {
        return y;
    }
    void Point::setX(double a)
    {
        x = a;
    }
    void Point::setY(double a)
    {
        y = a;
    }
    double Point::distance(Point p)
    {
        double dist = 0;
        dist = pow(getX() - p.getX(), 2.0);
        dist += pow(getY() - p.getY(), 2.0);
        return sqrt(dist);
    }
