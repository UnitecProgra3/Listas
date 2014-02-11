#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include <iostream>
using namespace std;
#include "NodoDoble.h"


class ListaDoble
{
    public:
        NodoDoble*inicio;
        ListaDoble();
        virtual ~ListaDoble();

        void imprimir();
        void agregarNodo(NodoDoble*nodo);
    protected:
    private:
};

#endif // LISTADOBLE_H
