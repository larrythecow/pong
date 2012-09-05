#include "pong.h"

bool pong::init(int w, int h, int color) {
    {
        if (SDL_Init(SDL_INIT_VIDEO) < 0) {
            fprintf(stderr, "unable to initialize SDL %s\n", SDL_GetError());
            exit(-1);
        }

        if (SDL_SetVideoMode(w, h, color, SDL_SWSURFACE) < 0) {
            fprintf(stderr, "unable to set Video Mode %s\n", SDL_GetError());
            exit(-1);
        }
    }
    return true;
}