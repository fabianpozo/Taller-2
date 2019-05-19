#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <Libro.h>
#include <Pila.h>
#include <PilaRecargada.h>
#include <windows.h>
#define SIZE 50
#define LONG 5
using namespace std;

void llenar(PilaRecargada *c, Libro l[]){
    int i=0;
    while(c->empty()){
        c->push(l[i]);
        i++;
    }
}

int main(){
    int c, op, i;
    char t[SIZE],a[SIZE];
    Pila pila;
    PilaRecargada pilaRecargada ,auxPila;
    Libro p[LONG],q;
    for(int i=0; i < 3; i++){
        fflush(stdin);
        cout << "Ingrese un titulo: "; cin.getline(t, SIZE);
        fflush(stdin);
        cout << "Ingrese un autor: "; cin.getline(a, SIZE);
        fflush(stdin);
        cout << "Ingrese cantidad de paginas: "; cin >> c;
        fflush(stdin);
        Libro l = Libro(c,a,t);
        pila.push(l);
        auxPila.push(l);
        pilaRecargada.push(l);
    }
    cout << "Ingrese una opcion:\n1) Mostrar\n2) Invertir\n3) Ordenar\n4) Ultimo\n5) Primero\n6) Vaciar\n7) Largo\n8)Eliminar Primos\nOpcion: "; cin >> op;
    while(op < 1 || op > 8){
        cout << "Ingrese una opcion valida!\n";
        cout << "1) Mostrar\n2) Invertir\n3) Ordenar\n4) Ultimo\n5) Primero\n6) Vaciar\n7) Largo\nOpcion: "; cin >> op;
    }
    switch(op){
        case 1:
            system("pause");
            system("cls");
            cout << "Mostrar los elementos de la Pila" << endl;
            system("pause");
            system("cls");
            i = 0;
            while(!pila.empty()){
                p[i] = pila.pop();
                //recargada.agregar(p[i]);
                p[i].mostrar();
                i++;
            }

            break;
        case 2:
            system("pause");
            system("cls");
            cout << "Mostrar los elementos invertidos de la Pila" << endl;
            system("pause");
            system("cls");
            auxPila.invertir(&auxPila);
            while(!auxPila.empty()){
                Libro p = auxPila.pop();
                pilaRecargada.push(p);
                p.mostrar();
            }
            break;
        case 3:

            system("pause");
            system("cls");
            cout << "Mostrar los elememtos ordenados de la pila" << endl;
            auxPila.ordenar(&auxPila);
            while(!auxPila.empty()){
                Libro q = auxPila.pop();
                q.mostrar();
            }
            break;
        case 4: //ULTIMO
            system("pause");
            system("cls");
            q = pilaRecargada.ultimo(pilaRecargada);
            q.mostrar();
            break;
        case 5: //PRIMERO
            system("pause");
            system("cls");
            q = pilaRecargada.primero(&pilaRecargada);
            q.mostrar();
            break;
        case 6:
            system("pause");
            system("cls");
            cout << "Vaciar la Pila" << endl;
            system("pause");
            system("cls");
            pilaRecargada .limpiar(&pilaRecargada);
            cout << "Pila correctamente limpiada" << endl;
            //LIMPIAR - VACIAR
            break;
        case 7:
            system("pause");
            system("cls");
            cout << "El largo es: " << pilaRecargada .largo(&pilaRecargada ) << endl;
            break;
         case 8:
            system("pause");
            system("cls");
            cout << "Mostrar los elementos eliminando primos de la Pila" << endl;
            system("pause");
            system("cls");
            auxPila.eliminaPrimos(&auxPila);
            while(!auxPila.empty()){
                Libro p = auxPila.pop();
                p.mostrar();
            }
            break;
    }
    cout << "-.-:-.-:-.-:-.-:-.-:-.-:-.-:-.-" << endl;
    return 0;
}
