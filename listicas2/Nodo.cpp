
#include "Nodo.h"
// Constructor
Nodo::Nodo(int dato, char cientifico, char tipo_evento, Nodo *next, Nodo *prev){
    this->dato = dato;
    this->cientifico = cientifico;
    this->tipo_evento = tipo_evento;
    this->next = next;
    this->prev = prev;
}

// Dato

void Nodo::setDato(int dato) {
    Nodo::dato = dato;
}
int Nodo::getDato() const {
    return dato;
}

// Cientifico

void Nodo::setCientifico(char cientifico) {
    cientifico = cientifico;
}
char Nodo::getCientifico() const {
    return cientifico;
}

// Evento

void Nodo::setEvento(char tipo_evento) {
    tipo_evento = tipo_evento;
}
char Nodo::getEvento() const {
    return tipo_evento;
}

// Next

void Nodo::setNext(Nodo *next) {
    Nodo::next = next;
}

Nodo *Nodo::getNext() const {
    return next;
}

// Prev

void Nodo::setPrev(Nodo *prev) {
    Nodo::prev = prev;
}

Nodo *Nodo::getPrev() const {
    return prev;
}
