
#include <iostream>
#include "ListaDoblementeEnlazada.h"
#include <cstdlib>
#include <ctime>

using namespace std;

ListaDoblementeEnlazada::ListaDoblementeEnlazada(){
    this->head = nullptr;
}

void ListaDoblementeEnlazada::Direcciones(Nodo *evento) {
    Nodo *eventoAnterior = nullptr;
    if ( head == nullptr) {
        *head = *evento;
        evento->next = nullptr;
        evento->prev = nullptr;
        *eventoAnterior = *evento;
    }
    else {
        evento->next = eventoAnterior;
        evento->prev = nullptr;  
        }
}


/*
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

 */
// Insertar un nuevo nodo al inicio
void ListaDoblementeEnlazada::insert(int numNodos){
   for (int i = 1; i <= numNodos; i++) {
       // Algoritmo random para dato
       int dato = rand() % 100 + 1;

       // Algoritmo para tipo_evento
       char tipo_evento = ' ';
       int p = 2;
       bool esPrimo = true;
       int contador = 0;
       while (esPrimo && p <= (dato / 2)) {
           if (dato % p == 0)
               esPrimo = false;
           else
               p = p + 1;
       }
       if (!esPrimo) {
           tipo_evento = 'N';
       }
       else if(esPrimo) {
           if (contador == 0) {
               tipo_evento = 'A';
               contador++;
           }
           if (contador == 1) {
               tipo_evento = 'B';
               contador++;
           }
           if (contador == 2) {
               Nodo *temp = this->head;
               while (temp != nullptr) { // Recorrer la lista
                   if (temp->tipo_evento == 'A') {
                       if (temp->dato % dato != 0) {
                           tipo_evento = 'C';
                           contador = 0;
                       }
                       temp = temp->next;
                       break;
                   }
               }
           }
       }

       // Algoritmo para cientifico
       char cientifico = ' ';
       if (tipo_evento == 'A'){
           char cientifico = 'E';
       }
       else if(tipo_evento == 'B'){
           char cientifico = (rand() % 2 == 0) ? 'E' : 'R';
       }
       else if(tipo_evento == 'C'){
             char cientifico = (rand() % 2 == 0) ? 'E' : 'R';
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

// operacion para evento c

/*
void ListaDoblementeEnlazada::dividirEventoAC() {
    Nodo* nodoActual = head;
    Nodo* nodoA = nullptr;
    Nodo* nodoC = nullptr;

    while (nodoActual) {
        if (nodoActual->tipo_evento == 'A') {
            nodoA = nodoActual;
        }
        else if (nodoActual->tipo_evento == 'C') {
            nodoC = nodoActual;
        }

        if (nodoA && nodoC) {
            // Realizar la operación de división
            double resultado = static_cast<double>(nodoC->dato) / static_cast<double>(nodoA->dato);

            // Crear un nuevo nodo para el resultado si es necesario
            Nodo* nodoResultado = new Nodo(resultado, 'R', 'R', nullptr, nullptr);

            // Enlazar el nuevo nodo
            nodoResultado->next = nodoC->next;
            if (nodoC->next) {
                nodoC->next->prev = nodoResultado;
            }
            nodoResultado->prev = nodoA;
            nodoC->next = nodoResultado;

            break; // Termina el bucle una vez que se ha realizado la operación
        }

        nodoActual = nodoActual->next;
    }
}
*/

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
            cout<<"|"<<temp->dato<<"|"<<temp->cientifico<<"|-> "<<temp->tipo_evento<<"|->"<<endl;
            temp = temp->next;
            i++;
        }
    }
}
