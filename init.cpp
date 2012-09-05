#include "pong.h"

bool pong::init(int w, int h, int color) {
    {
        if (SDL_Init(SDL_INIT_VIDEO) < 0) {
            fprintf(stderr, "unable to initialize SDL %s\n", SDL_GetError());
            exit(-1);
        }

        if ((display = SDL_SetVideoMode(w, h, color, SDL_SWSURFACE)) < 0) {
            fprintf(stderr, "unable to set Video Mode %s\n", SDL_GetError());
            exit(-1);
        }

        int flags = IMG_INIT_JPG | IMG_INIT_PNG;
        int initted = IMG_Init(flags);
        if ((initted & flags) != flags) {
            printf("IMG_Init: Failed to init required jpg and png support!\n");
            printf("IMG_Init: %s\n", IMG_GetError());
            // handle error
        }
    }
    return true;
}