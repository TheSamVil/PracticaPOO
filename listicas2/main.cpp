#include <iostream>
#include "ListaDoblementeEnlazada.h"
#include <cstdlib>
#include <ctime>

int main() {
    ListaDoblementeEnlazada *puntero = new ListaDoblementeEnlazada();
    puntero->insert(2, 'E', 'A', nullptr, nullptr);
    puntero->display();

    string nombre_evento = "NoNormal";
    int num = 11, p = 2; // num cantidad de veces que se hace el random - modificar luego.
    double valor;
    char event = ' ';
    bool esPrimo = true;
    srand(time(NULL));
    for (int i = 0; i < num; i++){
        valor = rand() % 100+1;
        cout<<"\n"<<valor<<endl;
    }
    while (esPrimo && p < num){
        if (num % p == 0)
            esPrimo = false;
        else (p = p + 1);
    }
    if (esPrimo)
        nombre_evento = "NoNormal";
    else
        nombre_evento = "Normal";
    if(nombre_evento == "NoNormal") {
        if (event == ' ')
            event = 'A';
        else if (event == 'A')
            event = 'B';
    }
    cout<<event;
    return 0;

}

/*
notas:
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

 AL FINAL DE TODO SE IMPRIME ESTO:
 cout<<"Total de eventos: "<<;

 */



