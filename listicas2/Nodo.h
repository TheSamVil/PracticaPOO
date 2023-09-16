//
// Created by Alexander on 1/09/2022.
//

#ifndef LISTICAS2_NODO_H
#define LISTICAS2_NODO_H


using namespace std;

class Nodo {
public: 
    int dato;
    char cientifico;
    char tipo_evento;
    Nodo *next;
    Nodo *prev;
    Nodo(int dato, char cientifico, char tipo_evento, Nodo *next, Nodo *prev);
    int getDato() const;
    void setDato(int dato);
    char getCientifico() const;
    void setCientifico(char cientifico);
    char getEvento() const;
    void setEvento(char tipo_evento);
    Nodo *getNext() const;
    void setNext(Nodo *next);
    Nodo *getPrev() const;
    void setPrev(Nodo *prev);
};


#endif //LISTICAS2_NODO_H
