#include "pong.h"
void pong::onEvent(SDL_Event* event) {
    switch (event->type) {
        case SDL_KEYDOWN:
            switch (event->key.keysym.sym){
				case SDLK_w:
					lPad->setState(PAD_UP);
					break;
				case SDLK_s:
					lPad->setState(PAD_DOWN);
					break;	
				case SDLK_UP:
					rPad->setState(PAD_UP);
					break;				
				case SDLK_DOWN:
					rPad->setState(PAD_DOWN);
					break;
				default:
					break;
			}
		break;
        case SDL_KEYUP:
            switch (event->key.keysym.sym){
				case SDLK_w:
				case SDLK_s:
					lPad->setState(PAD_STAY);
					break;
				case SDLK_UP:
				case SDLK_DOWN:
					rPad->setState(PAD_STAY);
					break;				
				default:
					break;
			}
            break;
        case SDL_QUIT:
            running=false;
			exit(-1);
			break;
		default:
            break;
    }
}
