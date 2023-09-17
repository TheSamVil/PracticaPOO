#include "Nodo.h"

// Constructor
Nodo::Nodo(int dato, char cientifico, char tipo_evento, Nodo *next, Nodo *prev){
    this->dato = dato;
    this->cientifico = cientifico;
    this->tipo_evento = tipo_evento;
    this->next = next;
    this->prev = prev;
}
