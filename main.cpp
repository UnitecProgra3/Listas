#include <iostream>
#include <fstream>
#include "ListaDoble.h"

using namespace std;



int main()
{
    ListaDoble ld;
    ld.agregarNodo(new NodoDoble(1));
    ld.agregarNodo(new NodoDoble(2));
    ld.agregarNodo(new NodoDoble(3));
    ld.borrarNodo(1);
    ld.imprimir();
    return 0;
}
