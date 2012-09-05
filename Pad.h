#ifndef _PAD_H_
#define _PAD_H_
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <iostream>
#include <stdlib.h>
class Pad {
private:
	int x;
	int y;
	const int height = 50;
	const int width = 10;
	SDL_Surface * surfPad;
public:	
	Pad();
	Pad(bool left);
	~Pad();
	int getX();
	int getY();
	int getHeight();
	int getWidth();
	void setX(int x);
	void setY(int y);
	void render();	
}

#endif
