#include <iostream>

int main() {
    std::cout << "Hola Mundo desde C++ y CMake!" << std::endl;

    #if defined(_WIN32)
        std::cout << "Sistema operativo detectado: Windows" << std::endl;
    #elif defined(__linux__)
        std::cout << "Sistema operativo detectado: Linux" << std::endl;
    #elif defined(__APPLE__)
        std::cout << "Sistema operativo detectado: macOS" << std::endl;
    #else
        std::cout << "Sistema operativo detectado: Otro/no reconocido" << std::endl;
    #endif

    return 0;
}