#include <iostream>
#include "listalinear.h"

using namespace std;

int main(){

    cout << "Lista Linear" << endl;
    Lista<int> lista(10);
    lista.insere(5);
    lista.remover();
    if(lista.listaCheia()){
        cout<<"lista cheia"<<endl;
    }
    else{
        lista.insere(10);
    }


    return 0;
}
