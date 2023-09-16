
#include <iostream>
#include "ListaDoblementeEnlazada.h"
#include <cstdlib>
#include <ctime>

using namespace std;

ListaDoblementeEnlazada::ListaDoblementeEnlazada(){
    this->head = nullptr;
}

void ListaDoblementeEnlazada::CrearDato(int dato){
    srand(time(NULL));
    evento.setDato(dato)= rand() % 100 + 1;
    
    // cout<<"\n"<<dato<<endl;
}

void ListaDoblementeEnlazada::CrearCientifico(char cientifico){
    // Evento A
    cientifico = 'E';
    // Evento B
    srand(time(NULL));
    int a = rand() % 2 + 1;
    if (a == 1)
        cientifico = 'E';
    else if (a == 2)
        cientifico = 'R';
    // cout<<"\n"<<cientifico<<endl;
}

void ListaDoblementeEnlazada::CrearEvento(char tipo_evento){
    // Algoritmo para tipo_evento
    tipo_evento = ' ';
    int p = 2;
    bool esPrimo = true;
    while (esPrimo && p < (dato / 2)) {
        if (dato % p == 0)
            esPrimo = false;
        else (p = p + 1);
    }
    if (!esPrimo)
        tipo_evento = 'N';
    else
        tipo_evento = ' ';
    if (tipo_evento == ' ') {
        tipo_evento = 'A';
    }
    // cout<<"\n"<<tipo_evento<<endl;
}
// Insertar un nuevo nodo al inicio
void ListaDoblementeEnlazada::insert(int dato, char cientifico, char tipo_evento, Nodo *next, Nodo *prev) {
        evento->next = this->head;
        // Cuando la lista no está vacía
        if (this->head != nullptr) {
            this->head->prev = evento;
        }
        // Hacer que el nuevo nodo sea el Head
        this->head = evento;
    }

// Mostrar elementos de la lista doblemente enlazada
void ListaDoblementeEnlazada:: display(){
    if (this->head == nullptr){
        cout << "La lista está vacía" << endl;
    }
    else{
        cout << " Elementos de la lista doblemente enlazada:" << endl;
        Nodo *temp = this->head;
        int i = i;
        while (temp != nullptr){
            cout<<"Nodo "<<i<<": ";
            cout<<"|"<<temp->dato<<"|"<<temp->cientifico<<"|-> ";
            temp = temp->next;
            i++;
        }
    }
}
