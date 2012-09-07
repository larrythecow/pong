#ifndef _PAD_H_
#define _PAD_H_
#include <SDL/SDL.h>
#include <iostream>
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
	int score;
	SDL_Surface * surfPad;
	SDL_Surface *surfScore;

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
	int getScore();
	void setX(int x);
	void setY(int y);
	void setSpeed(int speed);
	void setLeft(bool left);
	void setState(char state);
	void setScore(int score);
	void render(SDL_Surface *display,bool left);
	
};

#endif
