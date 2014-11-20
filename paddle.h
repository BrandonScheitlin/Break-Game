#ifndef PADDLE_H_INCLUDED
#define PADDLE_H_INCLUDED

#include "gLibrary.h"

class paddleType
{
    public:
        paddleType (int w = 30, ink c = red, int r = 97, int col = 240);
        void draw (Plotter&);
        void erase (Plotter&);
        void move (int);
        bool hitByBall(ball);
        bool paddleHitWall(paddleType, int);
        int getLoc();


    private:
        int width;
        Point loc, oldLoc;
        ink color;
        int cols, rows;
};



#endif // PADDLE_H_INCLUDED
