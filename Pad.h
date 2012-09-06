#ifndef _PAD_H_
#define _PAD_H_
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <iostream>
#include <stdlib.h>
#include "surface.h"

#define PAD_STAY 0
#define PAD_UP 1
#define PAD_DOWN 2

class Pad {
private:
	int x;
	int y;
	int height;
	int width;
	int speed;
	char state;
	SDL_Surface * surfPad;


public:	
	Pad();
	Pad(bool left);
	~Pad();
	int getX();
	int getY();
	int getHeight();
	int getWidth();
	int getSpeed();
	char getState();
	void setX(int x);
	void setY(int y);
	void setSpeed(int speed);
	void setLeft(bool left);
	void setState(char state);
	void render(SDL_Surface *display);
	
};

#endif
