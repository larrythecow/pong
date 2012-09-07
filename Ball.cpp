#include "Ball.h"
#include "surface.h"

Ball::Ball() {
    surfBall = Surface::loadImg("img/ball.png");
    this->x=400;
    this->y=300;
    this->moveX=5;
    genRandDirection();
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
    return moveX;
}

void Ball::setMoveX(int movex) {
    this->moveX = movex;
}

int Ball::getMoveY() {
    return moveY;
}

void Ball::setMoveY(int movey) {
    this->moveY = movey;
}

void Ball::render(SDL_Surface *display) {

    Surface::drawImg(surfBall, display, x, y);
}

void Ball::genRandDirection(){
	srand(time(NULL));

	moveY=rand()%21-20;
}
