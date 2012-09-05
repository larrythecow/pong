#include "pong.h"
void pong::onEvent(SDL_Event* event) {
    switch (event->type) {
        case SDL_KEYDOWN:
            switch (event->key.keysym.sym){
				case SDLK_w:
					lPad->setY(lPad->getY()-lPad->getSpeed());
					break;
				case SDLK_s:
					lPad->setY(lPad->getY()+lPad->getSpeed());
					break;	
				case SDLK_UP:
					rPad->setY(rPad->getY()-rPad->getSpeed());
					break;				
				case SDLK_DOWN:
					rPad->setY(rPad->getY()+rPad->getSpeed());
					break;
				default:
					break;
			}
		break;
        case SDL_KEYUP:
            printf("Reles: %s\n", SDL_GetKeyName(event->key.keysym.sym));
            break;
        case SDL_QUIT:
            running=false;
			exit(-1);
			break;
		default:
            break;
    }
}
