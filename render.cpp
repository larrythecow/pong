#include "pong.h"

void pong::render() {

   ball.render(display);
	rPad->render(display); 
	lPad->render(display); 
}
