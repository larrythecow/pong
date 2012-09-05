#include "pong.h"

void pong::render() {
	
	Surface::drawImg(surfBg,display,0,0);

   ball.render(display);
	rPad->render(display); 
	lPad->render(display); 
	
	SDL_Flip(display);
}
