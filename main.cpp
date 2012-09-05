/* 
 * File:   main.c
 * Author: sid
 *
 * Created on September 4, 2012, 5:12 PM
 */

#include <SDL/SDL.h>
#include <iostream>

void init(int w, int h, int color)
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

int main(int argc, char** argv) {
    SDL_Event event;
    int quit = 0;

	init(800,600,16);
    //    atexit(SDL_QUIT);
	//    what does it do???

    while (quit == 0) {
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_KEYDOWN:
                {
                    printf("Press: %s\n", SDL_GetKeyName(event.key.keysym.sym));
                    break;
                }
                case SDL_KEYUP:
                {
                    printf("Reles: %s\n", SDL_GetKeyName(event.key.keysym.sym));
                    break;
                }
                case SDL_QUIT:
                {
                    quit = 1;
                    break;
                }
                default:
                {
                    break;
                }
            }
        }
    }
    return (EXIT_SUCCESS);
}

