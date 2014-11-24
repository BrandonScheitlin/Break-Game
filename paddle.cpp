#include "gLibrary.h"

    paddleType::paddleType (int w, ink c,
                   int r, int col)
    {
        width = w;
        color = c;
        rows = r;
        cols = col;
        loc.setX(col/2);
        loc.setY(rows - 1);
        oldLoc = Point(0,0);
    }
    void paddleType::draw (Plotter& g)
    {
        if (oldLoc.getX() != loc.getX())
        {
            g.setColor(color);
            for(int i = -width/2; i <= width/2; i ++)
            {
                g.plot(loc.getX() + i, loc.getY(), SQUARE);
            }
        }
        oldLoc = loc;
    }
    void paddleType::erase (Plotter& g)
    {
        if (oldLoc.getX() != loc.getX())
        {
            g.setColor(black);
            for(int i = -width/2; i <= width/2; i ++)
            {
                g.plot(oldLoc.getX() + i, oldLoc.getY(), SQUARE);
            }
        }
    }
    void paddleType::move (int i)
    {

        loc.setX(loc.getX() + i);
    }
    bool paddleType::hitByBall(ball b)
    {
         bool hit;
         hit = (loc.getY()) <= (b.getLoc().getY());
         if(hit)
         {
             hit = (loc.getX() - width/2) < (b.getLoc().getX()) &&
                   (loc.getX() + width/2) >= (b.getLoc().getX());

         }
         return hit;
    }
    bool paddleType::paddleHitWall (paddleType pT, int col)
    {
        bool HitWall = false;
        if (loc.getX() == col)
        {
            HitWall = true;
        }
        return HitWall;
    }
