//
// Created by Alexander on 1/09/2022.
//

#include "Nodo.h"
Nodo::Nodo(string nombre_evento, string nombre_cientifico, int num_evento)
{
    this->num_evento = num_evento;
    this->nombre_evento = nombre_evento;
    this->nombre_cientifico = nombre_cientifico;
    this->next = nullptr;
    this->prev = nullptr;
}
 