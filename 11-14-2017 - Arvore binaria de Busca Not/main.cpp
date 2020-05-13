#include <iostream>
#include "arvoreBB.h"
using namespace std;

int main()
{
    cout << "BST" << endl;
    Bst<int> t;
    t.insere(t.pRaiz,5);
    t.insere(t.pRaiz,3);
    t.insere(t.pRaiz,9);
    t.insere(t.pRaiz,4);
    t.insere(t.pRaiz,2);
    t.insere(t.pRaiz,8);
    t.insere(t.pRaiz,10);
    cout<<"pre ordem"<<endl;
    t.preOrdem(t.pRaiz);
    cout<<"Em ordem:"<<endl;
    t.emOrdem(t.pRaiz);
    cout<<"pos ordem:"<<endl;
    t.posOrdem(t.pRaiz);

    return 0;
}







