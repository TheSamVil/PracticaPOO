
#ifndef LISTICAS2_LISTADOBLEMENTEENLAZADA_H
#define LISTICAS2_LISTADOBLEMENTEENLAZADA_H


#include "Nodo.h"

using namespace std;

class ListaDoblementeEnlazada {
public: Nodo *head;
    // Constructor
    ListaDoblementeEnlazada();
    
    // Metodos
    void CrearDato(int dato);
    
    void CrearCientifico(char cientifico);
    
    void CrearEvento(char tipo_evento);
    
    void insert(int dato, char cientifico, char tipo_evento, Nodo *next, Nodo *prev);
    
    void display();
};


#endif //LISTICAS2_LISTADOBLEMENTEENLAZADA_H
