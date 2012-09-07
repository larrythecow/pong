#include "pong.h"

void pong::render() {
	
	Surface::drawImg(surfBg,display,0,0);

   ball.render(display);
	rPad->render(display,false); 
	lPad->render(display,true); 
	
	SDL_Flip(display);
}
