//
// Created by Alexander on 1/09/2022.
//

#ifndef LISTICAS2_LISTADOBLEMENTEENLAZADA_H
#define LISTICAS2_LISTADOBLEMENTEENLAZADA_H


#include "Nodo.h"
#include <string>

using namespace std;

class ListaDoblementeEnlazada {
public: Nodo *head;
    ListaDoblementeEnlazada();
    // Insert new node at beginning position
    void insert(string nombre_evento, string nombre_cientifico, int numero_evento);

    // Display node element of doubly linked list
    void display();

};


#endif //LISTICAS2_LISTADOBLEMENTEENLAZADA_H
