#include "Pila.h"
#include "Libro.h"
Pila::Pila() : mPrimero(0), mUltimo(0){}
Pila::~Pila(){}

bool Pila::empty(){
    return !(mPrimero);
}

void Pila::push(Libro libro){
    Nodo *p = new Nodo(libro, NULL);
    if(empty()){
        mPrimero = p;
        mUltimo = mPrimero;
        return;
    }
    p->link = mPrimero;
    mPrimero = p;
}
Libro Pila::pop(){
    if(empty()){
        return Libro();
    }
    Nodo *p = mPrimero;
    Libro l = mPrimero->libro;
    mPrimero = mPrimero->link;
    delete p;
    return l;
}
