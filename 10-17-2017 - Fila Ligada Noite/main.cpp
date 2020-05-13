#include <iostream>
#include "filaligada.h"
#define Tipo int

using namespace std;
int main()
{
    cout << "Fila Ligada" << endl;
    Fila<Tipo> f;
    int opc, x;
    do{
        cout<<"1-insere"<<endl;
        cout<<"2-remove"<<endl;
        cout<<"3-primeiro"<<endl;
        cout<<"4-exibe"<<endl;
        cout<<"9-fim"<<endl;
        cout<<"Selecione: ";
        cin>>opc;
        switch(opc){
    case 1:
        cout<<"digite o valor:";
        cin>>x;
        if(f.insere(x)){
           cout<<"insercao com sucesso"<<endl;
        }
        else{
            cout<<"fila cheia..."<<endl;
        }
        break;
    case 2:
        if(f.filavazia()){
            cout<<"fila vazia..."<<endl;
        }
        else{
            cout<<"removido:"<<f.remover()<<endl;
        }
        break;
    case 3:
        if(f.filavazia()){
            cout<<"fila vazia..."<<endl;
        }
        else{
            cout<<"primeiro:"<<f.primeiro()<<endl;
        }
        break;
    case 4:
        if(f.filavazia()){
            cout<<"fila vazia..."<<endl;
        }
        else{
            cout<<"Elementos da Fila:"<<endl;
        Node<Tipo> *aux=f.getInic();
            while(aux!=NULL){
            cout<<aux->info<<endl;
            aux=aux->prox;
            }
        }
        break;
    case 9:
        cout<<"fim..."<<endl;
        break;
    default:
        cout<<"opcao invalida..."<<endl;
        break;
        }


    }while(opc !=9);



    return 0;
}
