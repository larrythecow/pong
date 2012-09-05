#include "pong.h"
#include <iostream>

pong::pong() {
}

int pong::execute() {
    init(600, 400, 16);

    SDL_Event event;

    while(running){
        while(SDL_PollEvent(&event))
            onEvent(&event);
        //logic();
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
