#ifndef _PONG_H_
#define _PONG_H_

#include <SDL/SDL.h>
#include "Ball.h"
#include "Pad.h"
#include "Net.h"

class pong {
private:
    bool running;
    Ball ball;
    Pad *rPad;
    Pad *lPad;
    Net net;

    SDL_Event event;
    SDL_Surface *display;
    SDL_Surface *surfBg;

public:

    pong();
    ~pong();
    int execute();

    bool init(int w, int h, int color);

    void onEvent(SDL_Event* Event);

    void logic();

    void render();

    void cleanup();
};

#endif
