#include "pong.h"

void pong::cleanup() {
    SDL_FreeSurface(display);
}