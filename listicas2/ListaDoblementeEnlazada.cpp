
#include <iostream>
#include "ListaDoblementeEnlazada.h"
#include <cstdlib>
#include <ctime>

using namespace std;

ListaDoblementeEnlazada::ListaDoblementeEnlazada(){
    this->head = nullptr;
}
/*
void ListaDoblementeEnlazada::direcciones(Nodo *evento) {
    Nodo *eventoAnterior = nullptr;
    if ( head == nullptr) {
        *head = *evento;
        evento->next = nullptr;
        evento->prev = nullptr;
        eventoAnterior = evento;
    }
    else {
        evento->next = eventoAnterior;
        evento->prev = nullptr;  
    }
}
*/
// Insertar un nuevo nodo al inicio
void ListaDoblementeEnlazada::insert(int numNodos){
    int contador = 0;
   for (int i = 1; i <= numNodos; i++) {
       // Algoritmo random para dato
       int dato = rand() % 100 + 1;

       // Algoritmo para tipo_evento
       bool esPrimo = true;
       for (int j = 2; j <= (dato / 2); j++) {
           if (dato % j == 0) {
               esPrimo = false;
               break;
           }
       }

       char tipo_evento = ' ';
       if (!esPrimo) {
           tipo_evento = 'N';
       }
       else {
           if (contador == 0) {
               tipo_evento = 'A';
               contador++;
           }
           if (contador == 1) {
               tipo_evento = 'A';
               contador++;
           }
           if (contador == 2){
                tipo_evento = 'B';
                contador++;
           }
           if (contador == 3) {
               Nodo *temp = this->head;
               bool encontrado = false;
               while (temp != nullptr) {
                   if (temp->tipo_evento == 'A') {
                       if (temp->dato % dato != 0) {
                           tipo_evento = 'C';
                           contador = 0;
                           encontrado = true;
                       }
                       break;
                   }
                   temp = temp->next;
               }
               if (!encontrado) {
                   contador = 0;
               }
           }
       }

       // Algoritmo para cientifico
       char cientifico = ' ';
       if (tipo_evento == 'A'){
           cientifico = 'E';
       }
       else if(tipo_evento == 'B'){
           cientifico = (rand() % 2 == 0) ? 'E' : 'R';
       }
       else if(tipo_evento == 'C'){
             cientifico = (rand() % 2 == 0) ? 'E' : 'R';
       }

       // Crear un nuevo nodo
       Nodo *evento = new Nodo(dato, cientifico, tipo_evento, nullptr, nullptr);
       // Enlazar el nuevo nodo
       evento->next = this->head;
       if (this->head != nullptr) {
           this->head->prev = evento;
       }
       this->head = evento;
   }
}

// Mostrar los 22 nodos
void ListaDoblementeEnlazada:: display(){
    if (this->head == nullptr){
        cout << "La lista está vacía" << endl;
    }
    else{
        cout << " Elementos de la lista doblemente enlazada:" << endl;
        Nodo *temp = this->head;
        int i = 1;
        while (temp != nullptr){
            cout<<"Nodo "<<i<<": ";
            cout<<"["<<temp->dato<<"|"<<temp->cientifico<<"]"<<temp->tipo_evento<<"|-> "; // luego quitar los de evento
            temp = temp->next;
            i++;
        }
    }
}
