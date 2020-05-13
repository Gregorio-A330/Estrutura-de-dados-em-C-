#include <iostream>
#include "Pilha.h"
using namespace std;

int main()
{
    cout << "Pilha Ligada" << endl;
    Pilha<int> p;
    p.empilha(3);
    p.empilha(5);
    p.empilha(9);
    //mostrapilha
    Node<int> *aux=p.getTopo();
    while(aux!=NULL){
        cout<<aux->info<<endl;
        aux=aux->prox;
    }
    cout<<p.desempilha()<<endl;
    //mostrapilha
    aux=p.getTopo();
    while(aux!=NULL){
        cout<<aux->info<<endl;
        aux=aux->prox;
    }
    return 0;
}
