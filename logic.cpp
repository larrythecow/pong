#include "pong.h"

void pong::logic() {
    int tmpX = ball.getX();
    int tmpY = ball.getY();


    //            (tmpX + ball.getMoveX) <= (lPad->getX() + lPad->getWidth())
    //            (tmpX + ball.getMoveX) <= (lPad->getX() + lPad->getWidth()
    //            ) {

    if (tmpX <= 0) {
        fprintf(stdout, "Player rechts hat gewonnen\n");
		  running=false;
    } else if (tmpX >= 790) {
        fprintf(stdout, "Player links hat gewonnen\n");
		  running=false;
    } else
        if (tmpY <= (0 - ball.getMoveY())) {
        ball.setMoveY(ball.getMoveY()*-1);
        ball.setX(0);
    } else
        if (tmpY >= (600 - ball.getMoveY())) {
        ball.setMoveY(ball.getMoveY()*-1);
        ball.setX(600);
    }

    if ((tmpX + ball.getMoveX()) <= (lPad->getX() + lPad->getWidth())) {
        if(ball.getY()-lPad->getY() >= -10 && ball.getY()-lPad->getY() <=50 ){
				ball.setMoveX(-ball.getMoveX());	  
		  }
    } else if ((tmpX + ball.getMoveX()) >= (rPad->getX())) {
        if(ball.getY()-rPad->getY() >= -10 && ball.getY()-rPad->getY() <=50){
				ball.setMoveX(-ball.getMoveX());	  
		  }
    }

    ball.setX(tmpX + ball.getMoveX());
    ball.setY(tmpY + ball.getMoveY());







    if (lPad->getState() == PAD_UP) {
        lPad->setY(lPad->getY() - lPad->getSpeed());
        if (lPad->getY() <= 0)
            lPad->setY(0);
    } else if (lPad->getState() == PAD_DOWN) {
        lPad->setY(lPad->getY() + lPad->getSpeed());
        if (lPad->getY() >= 550)
            lPad->setY(550);
    }

    if (rPad->getState() == PAD_UP) {
        rPad->setY(rPad->getY() - rPad->getSpeed());
        if (rPad->getY() <= 0)
            rPad->setY(0);
    } else if (rPad->getState() == PAD_DOWN) {
        rPad->setY(rPad->getY() + rPad->getSpeed());
        if (rPad->getY() >= 550)
            rPad->setY(550);
    }

    SDL_Delay(5);
}
