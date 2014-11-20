/*
Authors: Chuks Egbuchunam, Zehao Huang, Jiaqi Ma
         Brandon Scheitlin, Trent Matthews
Assignment Title: Breakout
Assignment Details: Make a game that breaks blocks
                    with a ball and paddle.
Due Date: After Thanksgiving
Date Created: 11/11/2014
Date Last Modified: 11/12/2014
*/
/*
Data Abstraction
Make objects and make sure the data is in the private area.

Input
Get what key strokes the user is pressing.

Process
Whatever key the person presses make the paddle move in that
direction. Also see if the ball has hit the paddle.

Output
Show the movement of the paddle.

Assumptions
The person will know what the arrow keys are.
*/


#include "gLibrary.h"

int main()
{
    int key;
    Plotter screen;
    paddleType paddle;
    ball gameBall;
    bool gameOver = false;
    paddle.draw(screen);



        while(!gameOver)
    {


        if (kbhit())
        {

            key = getch();
            if (key == 224)
            {
                key = getch();
            }
            if (key == 77 && !paddle.paddleHitWall(paddle, 230))
            {
                paddle.move(1);
            }
            if (key == 75 && !paddle.paddleHitWall(paddle, 9))
            {
                paddle.move(-1);
            }
            paddle.erase(screen);
            paddle.draw(screen);
        }
        if (gameBall.ballHitLeftWall(gameBall, 0))
        {
            if (gameBall.getDir() == 5*3.14/4)
            {
                gameBall.setDir(7*3.14/4);
            }
            else
            {
                gameBall.setDir(3.14/4);
            }
        }
        if (gameBall.ballHitTopWall(gameBall, 3))
        {
            if (gameBall.getDir() == 3.14/4)
            {
                gameBall.setDir(7*3.14/4);
            }
            else
            {
                gameBall.setDir(5*3.14/4);
            }
        }
        if (gameBall.ballHitRightWall(gameBall, 240))
        {
            if (gameBall.getDir() == 7*3.14/4)
            {
                gameBall.setDir(5*3.14/4);
            }
            else
            {
                gameBall.setDir(3*3.14/4);
            }
        }

        if (paddle.hitByBall(gameBall))
        {
            if (gameBall.getDir() == 7*3.14/4)
            {
                gameBall.setDir(3.14/4);
            }
            else
            {
                gameBall.setDir(3*3.14/4);
            }
            gameBall.setSpeed(gameBall.getSpeed() + .1);
        }
            gameBall.erase(screen);
            gameBall.draw(screen);
            gameBall.move();
            Sleep(10);

        if(gameBall.ballHitBottomWall(gameBall, 97))
        {
            gameOver = true;
        }

    }

    return 0;
}
