#include "Lista.h"

Lista::Lista()
{
    inicio=NULL;
}

Lista::~Lista()
{
    //dtor
}

void Lista::imprimir()
{
    for(Nodo*temp=inicio;
        temp!=NULL;
        temp=temp->sig)
        cout<<temp->num<<endl;
}

void Lista::agregarNodo(Nodo*n)
{
    if(inicio==NULL)
    {
        inicio=n;
    }else
    {
        Nodo*temp;
        for(temp=inicio;
            temp->sig!=NULL;
            temp=temp->sig);
            temp->sig=n;
    }
}
