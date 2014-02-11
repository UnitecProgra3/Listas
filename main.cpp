#include <iostream>
#include <fstream>
#include "Lista.h"

using namespace std;



int main()
{
    Lista l;
    l.agregarNodo(new Nodo(1));
    l.agregarNodo(new Nodo(2));
    l.agregarNodo(new Nodo(4));
    l.agregarNodo(new Nodo(999),543);
    l.imprimir();
    return 0;
}
