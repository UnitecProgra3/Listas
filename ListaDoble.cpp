#include "ListaDoble.h"

ListaDoble::ListaDoble()
{
    this->inicio=NULL;
}

ListaDoble::~ListaDoble()
{
    //dtor
}

void ListaDoble::imprimir()
{
    for(NodoDoble*temp=inicio;
        temp!=NULL;
        temp=temp->sig)
        cout<<temp->num<<endl;
}

void ListaDoble::agregarNodo(NodoDoble*n)
{
    if(inicio==NULL)
    {
        inicio=n;
    }else
    {
        NodoDoble*temp;
        for(temp=inicio;
            temp->sig!=NULL;
            temp=temp->sig);
        temp->sig=n;
        n->ant=temp;
    }
}
