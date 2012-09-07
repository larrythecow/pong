#ifndef BALL_H
#define BALL_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <stdio.h>
#include <time.h>


class Ball
{
private:
    int x;
    int y;
    signed int moveX;
    signed int moveY;
    SDL_Surface *surfBall;

public:
    Ball();
    ~Ball();
    int getX();
    void setX(int x);
    int getY();
    void setY(int y);
    int getMoveX();
    void setMoveX(int movex);
    int getMoveY();
    void setMoveY(int movey);
    void render(SDL_Surface *display);
	 void genRandDirection();
};

#endif // BALL_H
