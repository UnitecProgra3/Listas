#include <iostream>
#include <fstream>
#include "Lista.h"

using namespace std;



int main()
{
    Lista l;
    Nodo*n1 = new Nodo(1);
    Nodo*n2 = new Nodo(2);
    Nodo*n3 = new Nodo(3);
    Nodo*n4 = new Nodo(4);
    Nodo*n5 = new Nodo(5);
    l.agregarNodo(n1);
    l.agregarNodo(n2);
    l.agregarNodo(n3);
    l.agregarNodo(n4);
    l.agregarNodo(n5);
    l.borrarNodo(4);
    l.imprimir();
    return 0;
}
