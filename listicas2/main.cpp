#include <iostream>
#include "ListaDoblementeEnlazada.h"

int main() {
    ListaDoblementeEnlazada *puntero = new ListaDoblementeEnlazada();
    for (int i = 1; i < 23; i++) {
            // Crear un nuevo nodo
            Nodo *evento = new Nodo(dato, cientifico, tipo_evento, next, prev);
    puntero->insert(0, ' ', ' ', nullptr, nullptr);
    puntero->display();
}
    return 0;

}

/*
notas:
      FALTA:
     1. hacer los setters y getters para que la variable dato pueda entrar en evento
     2.ponerle a chat gpt el codigo nuevamente
     3. corregir todo lo de dato - cientifico - tipo_evento para que funcione correctamente y que imprima bien los 22 nodos
     4. apartir de ahi que ya esta logica bien ponerle lo del evento c y que todos los cout esten bien

// CADA QUE HAY UN EVENTO SE IMPRIME ESTO:
 cout<<"Se ha producido un evento de Tipo "<<tipo_evento<<": "<<dato<<endl; // Evento A
 cout<<"|"<<dato<<"|"<<cientifico<<"|"<<tipo_evento<<"|->"<<endl;
 cout<<"Se ha producido un evento de Tipo "<<(EVENTOB)<<": "<<(DATO)<<endl; // Evento B
 cout<<"|"<<(DATO)<<"|"<<(CIENTIFICO)<<"|"<<(EVENTOA)<<"|->";
 cout<<"|"<<(DATO)<<"|"<<(CIENTIFICO)<<"|"<<(EVENTOB)<<"|->"<<endl;
 cout<<"Se ha encontrado un evento TA "<<(DATO)<<"en el nodo: " (NUMERO_NODO)<<endl;": "<<(DATO)<<endl;
 cout<<"Se ha producido un evento de Tipo "<<(EVENTOC)<<": "<<(DATO)<<endl; // Evento C

 cout<<"Se ha viajado en el tiempo y no se han compartido datos"<<endl;
 cout<<"|"<<(DATO)<<"|"<<(CIENTIFICO)<<"|"<<(EVENTOA)<<"|->";
 cout<<"|"<<(DATO)<<"|"<<(CIENTIFICO)<<"|"<<(EVENTOB)<<"|->";
 cout<<"|"<<(DATO)<<"|"<<(CIENTIFICO)<<"|"<<(EVENTOC)<<"|->"<<endl;
 */
