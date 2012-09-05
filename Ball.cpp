#include "Ball.h"

Ball::Ball() {

    ballPicPointer = IMG_Load("ball.png");
    if (!ballPicPointer) {
        printf("IMG_Load: %s\n", IMG_GetError());
        // handle error
    }

    x = 32;
    y = 20;
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

void setimg(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
    
    SDL_BlitSurface(src, srcrect, dst, dstrect);
    SDL_Flip(dst);
}

void Ball::render(SDL_Surface *display) {

    SDL_Rect drect;
    drect.x = 200;
    drect.y = 100;
    drect.w = 10;
    drect.h = 10;
    setimg(ballPicPointer, NULL,display, &drect);
}


