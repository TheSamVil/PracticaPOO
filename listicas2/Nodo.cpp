//
// Created by Alexander on 1/09/2022.
//

#include "Nodo.h"
Nodo::Nodo(int dato, char cientifico, char tipo_evento, Nodo *next, Nodo *prev){
    this->dato = dato;
    this->cientifico = cientifico;
    this->tipo_evento = tipo_evento;
    this->next = next;
    this->prev = prev;
}

int Nodo::getDato() const {
    return dato;
}

void Nodo::setDato(int dato) {
    Nodo::dato = dato;
}

char Nodo::getCientifico() const {
    return cientifico;
}

void Nodo::setCientifico(char cientifico) {
    cientifico = cientifico;
}

char Nodo::getEvento() const {
    return tipo_evento;
}

void Nodo::setEvento(char tipo_evento) {
    tipo_evento = tipo_evento;
}

Nodo *Nodo::getNext() const {
    return next;
}

void Nodo::setNext(Nodo *next) {
    Nodo::next = next;
}

Nodo *Nodo::getPrev() const {
    return prev;
}

void Nodo::setPrev(Nodo *prev) {
    Nodo::prev = prev;
}

 