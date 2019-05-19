#ifndef LIBRO_H
#define LIBRO_H
#include <iostream>
using namespace std;

class Libro{
    public:
        Libro();
        Libro(int,string, string);
        virtual ~Libro();
        void setPaginas(int);
        int getPaginas();
        void setAutor(string);
        string getAutor();
        void setTitulo(string);
        string getTitulo();
        void mostrar();
    private:
        int paginas;
        string titulo;
        string autor;
};

#endif // LIBRO_H
