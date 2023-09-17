#include <iostream>
#include "ListaDoblementeEnlazada.h"
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    ListaDoblementeEnlazada *puntero = new ListaDoblementeEnlazada();
    int numNodes = 22;
    puntero->insert(numNodes);
    puntero->display();
    return 0;
}

// Poner todos los comentarios y entregar
