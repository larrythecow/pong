#include "pong.h"

void pong::onEvent(SDL_Event* event) {
    switch (event->type) {
        case SDL_KEYDOWN:
        {
            printf("Press: %s\n", SDL_GetKeyName(event->key.keysym.sym));
            break;
        }
        case SDL_KEYUP:
        {
            printf("Reles: %s\n", SDL_GetKeyName(event->key.keysym.sym));
            break;
        }
        case SDL_QUIT:
        {
            running=false;
        }
        default:
        {
            break;
        }
    }
}