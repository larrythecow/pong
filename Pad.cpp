#include "Pad.h"

Pad::Pad(){
}

Pad::Pad(bool left){
	if(left){
		x=10;
		surfPad = Surface::loadImg("img/pad_left.png");
	}
	else {
		x=780;
		surfPad = Surface::loadImg("img/pad_right.png");
	}
	width=10;
	height=50;
	speed=10;
	y=275;
	score=0;
	surfScore = Surface::loadImg("img/0.png");
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
char Pad::getState(){
	return state;	
}

int Pad::getScore(){
	return score;	
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

void Pad::setState(char state){
	this->state=state;
}

void Pad::setScore(int score){
	char filename[10];
	
	this->score=score;	
	
	sprintf(filename,"img/%d.png",this->score);
	
	surfScore = Surface::loadImg(filename);
}

void Pad::render(SDL_Surface *display, bool left){
	Surface::drawImg(surfPad,display,x,y);
	if(left)	
		Surface::drawImg(surfScore,display,352,5);
	else
		Surface::drawImg(surfScore,display,421,5);

}
	
