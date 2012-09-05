#include "pong.h"
#include <iostream>

pong::pong() {
}

int pong::OnExecute() {
    return 0;
}

int main(int argc, char* argv[]) {
    pong theApp;

    return theApp.OnExecute();
}
