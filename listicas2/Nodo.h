//
// Created by Alexander on 1/09/2022.
//

#ifndef LISTICAS2_NODO_H
#define LISTICAS2_NODO_H
#include <string>

using namespace std;

class Nodo {
public: 
    int num_evento;
    string nombre_evento;
    string nombre_cientifico;
    Nodo *next;
    Nodo *prev;
    Nodo(string nombre_evento, string nombre_cientifico, int num_evento);

};


#endif //LISTICAS2_NODO_H
