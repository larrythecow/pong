#ifndef _PONG_H_
#define _PONG_H_

#include <SDL/SDL.h>
#include "Ball.h"
#include "Pad.h"

class pong {
private:
    bool running;
    Ball ball;
    Pad rPad(false);
    Pad lPad(true);
    SDL_Event event;
    SDL_Surface *display;

public:
    
    pong();

    int execute();

    bool init(int w, int h, int color);

    void onEvent(SDL_Event* Event);

    void logic();

    void render();

    void cleanup();
};

#endif
