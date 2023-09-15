//
// Created by Alexander on 1/09/2022.
//
#include <iostream>
#include "ListaDoblementeEnlazada.h"
#include <string>
using namespace std;

ListaDoblementeEnlazada::ListaDoblementeEnlazada(){
    this->head = nullptr;
}

// Insertar un nuevo nodo al inicio
void ListaDoblementeEnlazada::insert(string nombre_evento, string nombre_cientifico, int numero_evento){
    // Crear un nuevo nodo
    Nodo *evento = new Nodo(nombre_evento, nombre_cientifico, numero_evento);
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
            cout << "  " << temp->nombre_evento;
            cout << "  " << temp->nombre_cientifico;
            cout << "  " << temp->num_evento;
            // Visita el siguiente nodo
            temp = temp->next;
        }
    }
}