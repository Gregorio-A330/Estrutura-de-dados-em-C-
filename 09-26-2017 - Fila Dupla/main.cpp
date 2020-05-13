#include <iostream>
#include "FilaDupla.h"
using namespace std;

int main()
{
    cout << "Alocacao Em Fila Dupla" << endl;
    char opc;
    int x;
    Fila<int> f(10);

    do{
        cout<<"1-Insere"<<endl;
        cout<<"2-Insere Inicio"<<endl;
        cout<<"3-Remove Inicio"<<endl;
        cout<<"4-Remove Final"<<endl;
        cout<<"5-primeiro"<<endl;
        cout<<"6-exibe a fila"<<endl;
        cout<<"9-fim"<<endl;
        cout<<"Selecione:";
        cin>>opc;
        cout<<"---------"<<endl;
        switch(opc){

        case '1':
            if(f.filaCheia()){
                cout<<"Fila Cheia..."<<endl;
            }
            else{
                cout<<"Digite o Valor para inserir no final:";
                cin>>x;
                f.insere(x);
            }
            break;

        case '2':
            if(f.filaCheia2()){
                cout<<"Fila Cheia..."<<endl;
            }
            else{
                cout<<"Digite o Valor para inserir no inicio:";
                cin>>x;
                f.insere2(x);
            }
            break;

        case '3':
            if(f.filaVazia()){
                cout<<"Fila Vazia..."<<endl;
            }
            else{
                cout<<"Removido:"<<f.remover()<<endl;
            }
            break;

        case '4':
            if(f.filaVazia()){
                cout<<"Fila Vazia..."<<endl;
            }
            else{
                cout<<"Removido:"<<f.remover2()<<endl;
            }
            break;

        case '5':
            if(f.filaVazia()){
                cout<<"Fila Vazia..."<<endl;
            }
            else{
                cout<<"Primeiro:"<<f.primeiro()<<endl;
                }
            break;

        case '6':
            if(f.filaVazia()){
                cout<<"fila Vazia..."<<endl;
            }
            else{
                cout<<"Elementos da Fila"<<endl;
                if(f.getInic() < f.getTamanho ()){
                    for(int i=0;i<f.getFim();i++){
                        cout<<"elementos:"<<f.getValor(i)<<endl;

                    }
                }
                else{
                    for(int i=0;i<f.getFim();i++);
                    {
                        cout<<"Elemento:"<<f.getValor(x)<<endl;
                        x++;
                    }
                }
            }
            break;
        case '9':
            cout<<"fim..."<<endl;
            break;
        default:
            cout<<"opcao invalida..."<<endl;
            break;
        }

    }while(opc != '9');


    return 0;
}
