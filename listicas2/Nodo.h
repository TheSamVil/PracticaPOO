
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
    
    // Metodos
    Nodo(int dato, char cientifico, char tipo_evento, Nodo *next, Nodo *prev);
   
    // Setters y Getters
    void setDato(int dato);
    int getDato() const;
    
    void setCientifico(char cientifico);
    char getCientifico() const;
    
    void setEvento(char tipo_evento);
    char getEvento() const;
    
    void setNext(Nodo *next);
    Nodo *getNext() const;
    
    void setPrev(Nodo *prev);
    Nodo *getPrev() const;
};


#endif //LISTICAS2_NODO_H
