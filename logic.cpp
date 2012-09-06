#include "pong.h"

void pong::logic() {
    int tmpX = ball.getX();
    int tmpY = ball.getY();

    if (tmpX <= 0 || tmpX >= 800 || tmpY <= 0 || tmpY >= 600) {

        if (tmpX <= 0) {
            fprintf(stdout, "Player links Hat gewonnen");
        }
        if (tmpX >= 790) {
            fprintf(stdout, "Player links Hat gewonnen");
        }
        if (tmpY <= (0 + ball.getMoveY())) {
            ball.setMoveY(ball.getMoveY()*-1);
            ball.setX(0);
        }
        if (tmpY >= (600 - ball.getMoveY())) {
            ball.setMoveY(ball.getMoveY()*-1);
            ball.setX(600);
        }
    }
    ball.setX(tmpX + ball.getMoveX());
    ball.setY(tmpY + ball.getMoveY());

    SDL_Delay(100);
}
