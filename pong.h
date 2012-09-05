#ifndef _PONG_H_
#define _PONG_H_

#include <SDL/SDL.h>
#include "Ball.h"

class pong {
private:
    bool running;
    Ball ball;
<<<<<<< HEAD
    SDL_Surface*    display;
=======
    SDL_Surface *display;
    SDL_Event event;
>>>>>>> 3e61c4074cc55e7861d66c6f725a5b6c7ac3698b

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
