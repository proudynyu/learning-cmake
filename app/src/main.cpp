#include <iostream>
#include <engine/engine.hpp>

int main() {
    std::cout << "Hello World" << std::endl;

    Engine *eng = new Engine();

    eng->PrintHelloWord();

    return 0;
}
