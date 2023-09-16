//
// Created by Alexander on 1/09/2022.
//
#include <iostream>
#include "ListaDoblementeEnlazada.h"
using namespace std;

ListaDoblementeEnlazada::ListaDoblementeEnlazada(){
    this->head = nullptr;
}

// Insertar un nuevo nodo al inicio
void ListaDoblementeEnlazada::insert(int dato, char cientifico, char tipo_evento, Nodo *next, Nodo *prev){
    // Algoritmo random para dato
    // Algoritmo para cientifico
    // Algoritmo para tipo_evento
    // Crear un nuevo nodo
    Nodo *evento = new Nodo(dato, cientifico, tipo_evento, next, prev);
    evento->next = this->head;
    // Cuando la lista no está vacía
    if (this->head != nullptr)
    {
        this->head->prev = evento;
    }
    // Hacer que el nuevo nodo sea el Head
    this->head = evento;
}

// Mostrar elementos de la lista doblemente enlazada
void ListaDoblementeEnlazada:: display()
{
    if (this->head == nullptr)
    {
        cout << "La lista está vacía" << endl;
    }
    else
    {
        cout << " Elementos de la lista doblemente enlazada:" << endl;
        // Obtener el primer nodo de la lista
        Nodo *temp = this->head;
        // iterate linked list
        while (temp != nullptr)
        {
            // Mostrar el valor del nodo
            cout << "  " << temp->dato;
            cout << "  " << temp->cientifico;
            cout << "  " << temp->tipo_evento;
            // Visita el siguiente nodo
            temp = temp->next;
        }
    }
}