#include "ball.h"

ball::ball()
{
}

ball::~ball()
{
}

int ball::getX()
{
    return x;
}

void ball::setX(int x)
{
    this->x=x;
}

int ball::getY()
{
    return y;
}

void ball::setY(int y)
{
    this->y=y;
}

int ball::getMoveX()
{
    return movex;
}

void ball::setMoveX(int movex)
{
    this->movex=movex;
}

int ball::getMoveY()
{
    return movey;
}

void ball::setMoveY(int movey)
{
    this->movey=movey;
}

