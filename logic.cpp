#include "pong.h"
int i = 0;

void pong::logic() {

    if (i < 40) {
        ball.setX(i * 10);
        ball.setY(i * 10);

//            SDL_Delay(100);
            i++;
	}
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
}
