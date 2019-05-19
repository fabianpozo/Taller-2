#include "PilaRecargada.h"
#define SIZE 3

PilaRecargada::PilaRecargada(){}
PilaRecargada::~PilaRecargada(){}

void PilaRecargada::invertir(Pila *c){
    Libro lib[SIZE], aux;
    int k = 0;
    while(!c->empty()){
        lib[k] = c->pop();
        k++;
    }
    for(int i=2;i > -1; i--){
        c->push(lib[i]);
    }
}

Libro PilaRecargada::primero(Pila *c){
    Libro lib;
    lib = c->pop();
    return lib;
}

void PilaRecargada::limpiar(Pila *c){
    while(!c->empty()){
        c->pop();
    }
}

Libro PilaRecargada::ultimo(Pila c){
    Libro lib;
    while(!c.empty()){
        lib = c.pop();
    }
    return lib;
}

int PilaRecargada::largo(Pila *c){
    int i=0;
    while(!c->empty()){
        c->pop();
        i++;
    }
    return i;
}

void PilaRecargada::ordenar(Pila *c){
    Libro lib[SIZE], aux;

    int k = 0;
    while(!c->empty()){
        lib[k] = c->pop();
        k++;
    }

    bool temp = false;
    while(!temp){
        temp = true;
        for(int i = 0; i < SIZE-1; i++){
            int minim = i;
            for(int j = i+1; j < SIZE; j++){
                if(lib[minim].getPaginas() < lib[j].getPaginas()){
                    minim = j;
                }
            }
            aux = lib[minim];
            lib[minim] = lib[i];
            lib[i] = aux;
        }
    }

    for(int x = 0; x < SIZE; x++){
        c->push(lib[x]);
    }

}
bool esPrimo(Libro l){
    bool primo = true;
    for(int i = 2; i < l.getPaginas() && primo == true; i++){
        if(l.getPaginas() % i == 0) primo = false;
    }
    return primo;
}

void PilaRecargada::eliminaPrimos(Pila *c){
    Libro lib[SIZE], aux[SIZE];
    bool primo = true;
    int i = 0, k = 0;
    while(!c->empty()){
        lib[i] = c->pop();
        //lib[i].mostrar();
        if(esPrimo(lib[i])){
            //cout << "Es primo" << endl;
            //lib[i].mostrar();
        }
        else {
            //cout << "No es primo" << endl;
            //lib[i].mostrar();
            aux[k] = lib[i];
            k++;
        }
        i++;
    }
    cout << "PILA SIN NUMEROS PRIMOS!" << endl;
    for(i=0; i<k; i++){
        c->push(aux[i]);
        aux[i].mostrar();
    }
}
