#ifndef PILA_H
#define PILA_H
#include "Libro.h"
class Pila{
    public:
        class Nodo{
            public:
                Nodo(const Libro& l, Nodo *p) : libro(l), link(p){};
                virtual ~Nodo(){};
                Libro libro;
                Nodo *link;
        };
        Pila();
        virtual ~Pila();
        void push(Libro);
        Libro pop();
        bool empty();
    private:
        Nodo *mPrimero;
        Nodo *mUltimo;
};

#endif // PILA_H
