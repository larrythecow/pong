#ifndef _PONG_H_
#define _PONG_H_

#include <SDL/SDL.h>

class pong {
private:
    bool Running;

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