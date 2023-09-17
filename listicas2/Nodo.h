#ifndef LISTICAS2_NODO_H
#define LISTICAS2_NODO_H
using namespace std;

class Nodo {
public:
    // Atributos
    int dato;
    char cientifico;
    char tipo_evento;
    Nodo *next;
    Nodo *prev;
    
    // Constructor
    Nodo(int dato, char cientifico, char tipo_evento, Nodo *next, Nodo *prev);
};


#endif //LISTICAS2_NODO_H
