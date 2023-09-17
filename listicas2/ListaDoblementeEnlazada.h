#ifndef LISTICAS2_LISTADOBLEMENTEENLAZADA_H
#define LISTICAS2_LISTADOBLEMENTEENLAZADA_H
#include "Nodo.h"
using namespace std;

class ListaDoblementeEnlazada {
public:
    // Atributos
    Nodo *head = nullptr;

    // Constructor
    ListaDoblementeEnlazada();

    // Metodos
    void viaje(int dato, char tipo_evento, char cientifico, int i);
    void insert(int numNodos);
    void display();
};


#endif //LISTICAS2_LISTADOBLEMENTEENLAZADA_H
