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
        while (SDL_PollEvent(&event))
            onEvent(&event);
        logic();
        render();


    }

    cleanup();
    return 0;
}

int main(int argc, char* argv[]) {
    pong theApp;
    std::cout << "programm started\n";
    return theApp.execute();
}
