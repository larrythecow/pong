#include "pong.h"
int i = 0;
;

void pong::logic() {

    if (i < 40) {
        ball.setX(i * 10);
        ball.setY(i * 10);

        SDL_Delay(100);
        i++;
    }
}