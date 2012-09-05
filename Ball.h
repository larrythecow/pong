#ifndef BALL_H
#define BALL_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

class Ball
{
public:
    Ball();
    ~Ball();

    int getX();
    void setX(int x);
    int getY();
    void setY(int y);
	int getLastX();
	void setLastX(int lastx);
	int getLastY();
	void setLastY(int lasty);
    int getMoveX();
    void setMoveX(int movex);
    int getMoveY();
    void setMoveY(int movey);
    void render(SDL_Surface *display);


private:
    int x;
    int y;
	int lastx;
	int lasty;
    signed int movex;
    signed int movey;
    SDL_Surface *surfBall;

};

#endif // BALL_H
