#include "Pad.h"

Pad::Pad(){
}

Pad::Pad(bool left){
	if(left){
		x=10;
		surfPad=IMG_Load("pad_left.png");
	}
	else {
		x=780;
		surfPad=IMG_Load("pad_right.png");
	}
	if(!surfPad){
		printf("unable to load pad-image");
		exit(EXIT_FAILURE);
	}
	width=10;
	height=50;
	speed=5;
	y=275;
}

Pad::~Pad(){
	SDL_FreeSurface(surfPad);
}

int Pad::getX(){
	return x;
}

int Pad::getY(){
	return y;
}

int Pad::getHeight(){
	return height;
}

int Pad::getWidth(){
	return width;
}
int Pad::getSpeed(){
	return speed;
}

void Pad::setX(int x){
	this->x=x;
}

void Pad::setY(int y){
	this->y=y;
}

void Pad::setSpeed(int speed){
	this->speed=speed;
}

void Pad::render(){

}
