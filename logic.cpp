#include "pong.h"
int i = 0;

void pong::logic() {

    if (i < 20) {
        printf("pos: x:%d y:%d", i * 10, i * 10);
        ball.setX(i * 10);
        ball.setY(i * 10);

//            SDL_Delay(100);
            i++;
        }
}
