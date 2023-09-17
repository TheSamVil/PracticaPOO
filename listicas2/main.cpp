#include <iostream>
#include "ListaDoblementeEnlazada.h"

int main() {
    ListaDoblementeEnlazada *puntero = new ListaDoblementeEnlazada();
    int numNodes = 22;
    puntero->insert(numNodes);
    puntero->display();
    return 0;
}

/*
notas:
      FALTA:
     1. que el evento si sea a, b, c
     2. comprobar que cuando el evento sea c si haga lo de coprimo con a
     3. implementar la logica de si si comparte datos o no
     4. poner todos los couts
     5. terminar, organizar el codigo y poner los comentarios :D

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
