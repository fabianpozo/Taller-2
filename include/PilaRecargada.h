#ifndef PILARECARGADA_H
#define PILARECARGADA_H
#include <Pila.h>
#include <Libro.h>

class PilaRecargada : public Pila
{
    public:
        PilaRecargada();
        virtual ~PilaRecargada();
        void invertir(Pila*);
        void limpiar(Pila*);
        Libro primero(Pila*);
        Libro ultimo(Pila);
        int largo(Pila*);
        void ordenar(Pila*);
        void eliminaPrimos(Pila*);
    private:
        Pila c;
};

#endif // PILARECARGADA_H

