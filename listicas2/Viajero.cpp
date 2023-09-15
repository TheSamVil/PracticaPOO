//
// Created by USUARIO on 15/09/2023.
//

#include "Viajero.h"

Viajero::Viajero() {
    cientifico = 0;
}

void Viajero::setNombre(int _cientifico){
    cientifico = _cientifico;
}

int Viajero::getNombre() const{
    return cientifico;
}

