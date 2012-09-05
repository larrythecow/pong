#include "Ball.h"

Ball::Ball()
{
    // load sample.png into image
    ballPicPointer=IMG_Load("ball.png");
    if(!ballPicPointer) {
        printf("IMG_Load: %s\n", IMG_GetError());
        // handle error
    }

    x=320;
    y=200;
}

Ball::~Ball()
{
}

int Ball::getX()
{
    return x;
}

void Ball::setX(int x)
{
    this->x=x;
}

int Ball::getY()
{
    return y;
}

void Ball::setY(int y)
{
    this->y=y;
}

int Ball::getMoveX()
{
    return movex;
}

void Ball::setMoveX(int movex)
{
    this->movex=movex;
}

int Ball::getMoveY()
{
    return movey;
}

void Ball::setMoveY(int movey)
{
    this->movey=movey;
}

void Ball::render()
{


}

