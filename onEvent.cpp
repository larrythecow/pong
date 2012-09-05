#include "pong.h"
void pong::onEvent(SDL_Event* event) {
    switch (event->type) {
        case SDL_KEYDOWN:
            switch (event->key.keysym.sym){
				case SDLK_w:
					lPad.setY(lPad.getY-lPad.getSpeed);
					break;
				case SDLK_s:
					lPad.setY(lPad.getY+lPad.getSpeed);
					break;	
				case SDLK_UP:
					rPad.setY(rPad.getY-rPad.getSpeed);
					break;				
				case SDLK_DOWN:
					rPad.setY(rPad.getY+rPad.getSpeed);
					break;
		break;
        case SDL_KEYUP:
            printf("Reles: %s\n", SDL_GetKeyName(event->key.keysym.sym));
            break;
        case SDL_QUIT:
<<<<<<< HEAD
        {
            running=false;
        }
        default:
=======
            cleanup();
						        
		default:
>>>>>>> ec9273fbf988b775abb160451c47d057d82b6398
        {
            break;
        }
    }
}
