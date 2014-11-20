#ifndef BRICK_H_INCLUDED
#define BRICK_H_INCLUDED

class brick
{
    public:
    brick(int w = 20, ink bc = darkgreen);
    void setX(double);
    void setY(double);
    double getX();
    double getY();
    void eraseBr(Plotter&);

    private:
    int width;
    Point loc;
    ink color;
    int cols, rows;
};

#endif // BRICK_H_INCLUDED
