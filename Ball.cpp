#include "Ball.h"
#include "surface.h"

Ball::Ball() {
    surfBall = Surface::loadImg("img/ball.png");
    this->x=1;
    this->y=1;
    this->setMoveX(5);
    this->setMoveY(10);
}

Ball::~Ball() {
}

int Ball::getX() {
    return x;
}

void Ball::setX(int x) {
    this->x = x;
}

int Ball::getY() {
    return y;
}

void Ball::setY(int y) {
    this->y = y;
}

int Ball::getMoveX() {
    return movex;
}

void Ball::setMoveX(int movex) {
    this->movex = movex;
}

int Ball::getMoveY() {
    return movey;
}

void Ball::setMoveY(int movey) {
    this->movey = movey;
}

void Ball::render(SDL_Surface *display) {

    Surface::drawImg(surfBall, display, x, y);
}


