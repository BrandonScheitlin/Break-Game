#include "gLibrary.h"
brick::brick(int w, int r, ink c, Point p, char sh)
{
    width = w;
    color = c;
    loc = p;
    loc.setX(200);
    loc.setY(40);
    shape = sh;
    rows = r;

}
void brick::setLoc(Point a)
{
    loc = a;
}
Point brick::getLoc()
{
    return loc;
}
void brick::draw(Plotter& g)
{
    g.setColor(getColor());
    for(int i = -width/2; i <= width/2; i ++)
    {
        for(int j = rows/2; j <= rows; j++)
        {
            g.plot(loc.getX() + i, loc.getY() + j, SQUARE);
        }
    }
}
ink brick::getColor()
{
    return color;
}
void brick::setColor(ink a)
{
    color = a;
}
char brick::getShape()
{
    return shape;
}

bool brick::ballHitBrick(ball b)
{
    bool hit = false;

                if(b.getLoc().getY() <= brick[r][c].getLoc().getY() + 4 && b.getLoc().getY() >= brick[r][c].getLoc().getY() )
                {
                    if(b.getLoc().getX() <= brick[r][c].getLoc().getX() + 12 && b.getLoc().getX() >= brick[r][c].getLoc().getX() - 10)
                    {
                        hit = true;
                    }
                }


        return hit;
}

