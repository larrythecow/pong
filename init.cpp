#include "pong.h"

bool pong::init(int w, int h, int color) {
    {
        if (SDL_Init(SDL_INIT_VIDEO) < 0) {
            fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
            exit(-1);
        }
        //SDL_SWSURFACE
        if ((display = SDL_SetVideoMode(w, h, color, SDL_DOUBLEBUF)) < 0) {
            fprintf(stderr, "SDL_SetVideoMode: %s\n", SDL_GetError());
            exit(-1);
        }

        int flags = IMG_INIT_JPG | IMG_INIT_PNG;
        int initted = IMG_Init(flags);
        if ((initted & flags) != flags) {
            fprintf(stderr, "IMG_Init: %s\n", IMG_GetError());
            exit(-1);
        }
    }
    return true;
}