#include <iostream>
#include <fstream>
#include "Lista.h"

using namespace std;



int main()
{
    Lista l;
    l.agregarNodo(new Nodo(1));
    l.agregarNodo(new Nodo(5));
    l.agregarNodo(new Nodo(10));
    l.imprimir();
    return 0;
}
