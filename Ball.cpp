#include "Ball.h"
#include "surface.h"

Ball::Ball() {
    surfBall = Surface::loadImg("ball.png");
    this->x=40;
    this->y=200;
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

int Ball::getLastX(){
	return lastx;
}

void Ball::setLastX(int lastx){
	this->lastx=lastx;
}

int Ball::getLastY(){
	return lastx;
}

void Ball::setLastY(int lasty){
	this->lasty=lasty;
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


