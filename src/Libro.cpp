#include "Libro.h"

Libro::Libro(){
    this->paginas = 0;
    this->titulo = "";
    this->autor = "";
}
Libro::Libro(int p, string a, string t){
    this->paginas = p;
    this->autor = a;
    this->titulo = t;
}

Libro::~Libro(){}

void Libro::setPaginas(int p){
    this->paginas = p;
}
int Libro::getPaginas(){
    return this->paginas;
}
void Libro::setAutor(string a){
    this->autor = a;
}
string Libro::getAutor(){
    return this->autor;
}
void Libro::setTitulo(string t){
    this->titulo = t;
}
string Libro::getTitulo(){
    return this->titulo;
}
void Libro::mostrar(){
    cout << "-.-:-.-:-.-:-.-:-.-:-.-:-.-:-.-" << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Cantidad de paginas: " << paginas << endl;

}


