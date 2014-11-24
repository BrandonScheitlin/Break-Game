#ifndef BRICK_H_INCLUDED
#define BRICK_H_INCLUDED

#include "gLibrary.h"


class brick
{
    public:
    brick(int w = 20, int r = 3, ink = white, Point = Point(), char = SQUARE);
    Point getLoc ();
    void draw(Plotter&);
    void setLoc(Point);
    bool Active(Plotter&);
    ink getColor();
    void setColor(ink a);
    char getShape();
    bool ballHitBrick(ball b);


    private:
    int width, rows;
    Point loc;
    ink color;
    bool active;
    int hitCount;
    char shape;
};

#endif // BRICK_H_INCLUDED

<<<<<<< HEAD

=======
>>>>>>> e2933428e39fd6c548516909934935a07649ca97
