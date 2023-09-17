
#include <iostream>
#include "ListaDoblementeEnlazada.h"
#include <cstdlib>

using namespace std;

ListaDoblementeEnlazada::ListaDoblementeEnlazada(){
    this->head = nullptr;
}

void ListaDoblementeEnlazada::viaje(int dato, char tipo_evento, char cientifico, int i) {
    if (tipo_evento == 'A') {
        cout << "Se ha producido un evento de Tipo A: " << dato << endl;
        cout << "|" << dato << "|" << cientifico << "|" << tipo_evento << "|->" << endl;
        cout << " " << endl;
    }
    if (tipo_evento == 'B') {
        Nodo *temp = this->head;
        int contador = 1;
        while (temp != nullptr) {
            if (temp->tipo_evento == 'A') {
                break;
            } else {
                contador++;
                temp = temp->next;
            }
        }
        int numero_nodo = i - contador;
        cout << "Se ha producido un evento de Tipo B: " << dato << endl;
        cout << "|" << temp->dato << "|" << temp->cientifico << "|" << temp->tipo_evento << "|->";
        cout << "|" << dato << "|" << cientifico << "|" << tipo_evento << "|->" << endl;
        cout << " " << endl;
        cout << "Se ha encontrado un evento TA " << temp->dato << " en el nodo : " << numero_nodo << endl;
    }
    if (tipo_evento == 'C') {

        Nodo *tempA = this->head;
        while (tempA != nullptr) {
            if (tempA->tipo_evento == 'A') {
                break;
            } else {
                tempA = tempA->next;
            }
        }
        Nodo *tempB = this->head;
        while (tempB != nullptr) {
            if (tempB->tipo_evento == 'B') {
                break;
            } else {
                tempB = tempB->next;
            }
        }

        cout << "Se ha producido un evento de Tipo " << tipo_evento << ": " << dato << endl;

        bool esPrimo = true;
        for (int j = 2; j <= (dato / 2); j++) {
            if (dato % j == 0) {
                esPrimo = false;
                break;
            }
        }
        if (!esPrimo) {
            cout << "Se ha viajado en el tiempo y no se han compartido datos" << endl;
        } else if (esPrimo) {
            if (cientifico == 'E') {
                cout << "Se ha viajado en el tiempo y se han compartido datos" << endl;
            } else if (cientifico == 'R') { // escribir lo de que el enunciado tuki
                if (tempA->cientifico == 'E') {
                    cout << "Se ha viajado en el tiempo y se han compartido datos" << endl;
                } else if (tempA->cientifico == 'R') {
                    cout << "Se ha viajado en el tiempo y no se han compartido datos" << endl;
                }
            }
        }
        cout << "|" << tempA->dato << "|" << tempA->cientifico << "|" << tempA->tipo_evento << "|->";
        cout << "|" << tempB->dato << "|" << tempB->cientifico << "|" << tempB->tipo_evento << "|->";
        cout << "|" << dato << "|" << cientifico << "|" << tipo_evento << "|->" << endl;
        cout << " " << endl;
    }
}

// Insertar un nuevo nodo al inicio
    void ListaDoblementeEnlazada::insert(int numNodos) {
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

            if (esPrimo && contador == 0) {
                tipo_evento = 'A';
                contador++;
            } else if (esPrimo && contador == 1) {
                tipo_evento = 'B';
                contador++;
            } else if (contador == 2) {
                Nodo *temp = this->head;
                while (temp != nullptr) {
                    if (temp->tipo_evento == 'A') {
                        if (temp->dato % dato != 0) {
                            tipo_evento = 'C';
                            contador = 0;
                        } else {
                            tipo_evento = 'N';
                        }
                        break;
                    }
                    temp = temp->next;
                }
            } else if (!esPrimo) {
                tipo_evento = 'N';
            }

            // Algoritmo para cientifico
            char cientifico = ' ';
            if (tipo_evento == 'A') {
                cientifico = 'E';
            } else if (tipo_evento == 'B') {
                cientifico = (rand() % 2 == 0) ? 'E' : 'R';
            } else if (tipo_evento == 'C') {
                cientifico = (rand() % 2 == 0) ? 'E' : 'R';
            } else if (tipo_evento == 'N') {
                cientifico = (rand() % 2 == 0) ? 'E' : 'R';
            }

            // Llamar a la función viaje que imprime los eventos
            viaje(dato, tipo_evento, cientifico, i);

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
void ListaDoblementeEnlazada::display() {
    if (this->head == nullptr) {
        cout << "La lista está vacía" << endl;
    } else {
        cout << "Total de eventos: 22" << endl;
        Nodo *temp = this->head;
        int i = 1;
        while (temp != nullptr) {
            cout << "[" << temp->dato << "|" << temp->cientifico << "] -> ";
            temp = temp->next;
            i++;
        }
        if (temp == nullptr) {
            cout << "[" << "NULL" << "]" << endl;
        }
    }
}