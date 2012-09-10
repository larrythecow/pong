#include "pong.h"
#include <iostream>
#include "Ball.h"

pong::pong() {
	running=true;
	rPad = new Pad(false);
	lPad = new Pad(true);
	surfBg =  Surface::loadImg("img/bg.png");
}

pong::~pong(){
	delete lPad;
	delete rPad;	
}

int pong::execute() {
    init(800, 600, 16);
	
    while (running) {
   	  Uint32 start = SDL_GetTicks();
		  while (SDL_PollEvent(&event))
            onEvent(&event);
        logic();
        render();

		  if(SDL_GetTicks()-start < 1000/FPS)
			  SDL_Delay(1000/FPS-(SDL_GetTicks()-start));
    }

    cleanup();
    return 0;
}

int main(int argc, char* argv[]) {
    pong theApp;
    std::cout << "programm started\n";
    return theApp.execute();
}
