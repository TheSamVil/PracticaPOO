
#ifndef LISTICAS2_LISTADOBLEMENTEENLAZADA_H
#define LISTICAS2_LISTADOBLEMENTEENLAZADA_H


#include "Nodo.h"

using namespace std;

class ListaDoblementeEnlazada {
public: Nodo *head = nullptr;
    // Constructor
    ListaDoblementeEnlazada();
    
    // Metodos
    
    // void CrearCientifico(char cientifico);
    
    void Direcciones(Nodo *evento);
    
    void insert(int numNodos);
    
    void display();
};


#endif //LISTICAS2_LISTADOBLEMENTEENLAZADA_H
