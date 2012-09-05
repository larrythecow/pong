#ifndef _PONG_H_
#define _PONG_H_

#include <SDL/SDL.h>

class pong {
private:
    bool Running;

public:
    pong();

    int OnExecute();

    bool OnInit();

    void OnEvent(SDL_Event* Event);

    void OnLoop();

    void OnRender();

    void OnCleanup();
};

#endif