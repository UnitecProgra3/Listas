#ifndef LISTA_H
#define LISTA_H

#include  <iostream>
#include "Nodo.h"
using namespace std;

class Lista
{
    public:
        Nodo*inicio;

        Lista();
        virtual ~Lista();
        void imprimir();
        void agregarNodo(Nodo*n);
    protected:
    private:
};

#endif // LISTA_H
