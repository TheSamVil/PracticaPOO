#include <iostream>
#include "ListaDoblementeEnlazada.h"
#include <cstdlib>
#include <ctime>

int main() {
    ListaDoblementeEnlazada *puntero = new ListaDoblementeEnlazada();
    // Insert following linked list nodes
    puntero->insert("a", "einstein", 22);
    //  NULL <- 10 <--> 20 <--> 30 <--> 40 <--> 50 <--> 60 <--> 70->NULL
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





