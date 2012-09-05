#include "pong.h"
#include <iostream>

pong::pong() {
}

int pong::execute() {
    this->init(600, 400, 16);
    this->logic();
    return 0;
}

int main(int argc, char* argv[]) {
    pong theApp;
    std::cout << "programm started\n";
    return theApp.execute();
}
