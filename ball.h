#ifndef BALL_H
#define BALL_H

#include <SDL/SDL.h>

class ball
{
public:
    ball();
    ~ball();

    int getX();
    void setX(int x);
    int getY();
    void setY(int y);
    int getMoveX();
    void setMoveX(int movex);
    int getMoveY();
    void setMoveY(int movey);


private:
    int x;
    int y;
    signed int movex;
    signed int movey;
    SDL_Surface *ballPicPointer;

};

#endif // BALL_H
