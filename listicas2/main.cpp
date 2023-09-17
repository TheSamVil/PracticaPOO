#include <iostream>
#include "ListaDoblementeEnlazada.h"
#include <cstdlib>
#include <ctime>

int main() {
    // Se inicializa el random para que no se repitan los numeros
    srand(static_cast<unsigned int>(time(nullptr)));
    // Se crea el puntero
    ListaDoblementeEnlazada *puntero = new ListaDoblementeEnlazada();
    int numNodes = 22;
    // Numero de nodos se hace de manera estatica para que siempre sean 22
    puntero->insert(numNodes);
    // Se muestra la lista de los 22 nodos
    puntero->display();
    return 0;
}
