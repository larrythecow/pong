#include "pong.h"

void pong::logic() {
    int tmpX = ball.getX();
    int tmpY = ball.getY();

    if (tmpX <= 0 || tmpX >= 800 || tmpY <= 0 || tmpY >= 600 - 10) {

        if (tmpX <= 0) {
            fprintf(stdout, "Player links Hat gewonnen\n");
        }
        if (tmpX >= 790) {
            fprintf(stdout, "Player links Hat gewonnen");
        }
        if (tmpY <= (0 - ball.getMoveY())) {
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

	if (lPad->getState()==PAD_UP){
		lPad->setY(lPad->getY()-lPad->getSpeed());	
		if(lPad->getY()<= 0)
			lPad->setY(0);
	}
	else if (lPad->getState()==PAD_DOWN){
		lPad->setY(lPad->getY()+lPad->getSpeed());	
		if(lPad->getY()>= 550)
			lPad->setY(550);
	}

	if (rPad->getState()==PAD_UP){
		rPad->setY(rPad->getY()-rPad->getSpeed());	
		if(rPad->getY()<= 0)
			rPad->setY(0);
	}
	else if (rPad->getState()==PAD_DOWN){
		rPad->setY(rPad->getY()+rPad->getSpeed());
		if(rPad->getY()>= 550)
			rPad->setY(550);
	}

	SDL_Delay(10);
}
