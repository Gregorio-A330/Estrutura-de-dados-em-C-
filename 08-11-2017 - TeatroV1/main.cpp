#include <iostream>
#include "contador.h"

using namespace std;
int main()
{
    int opc;
    int lin, col,setor,lugar;
    cout<<"Digite os setores:";
    cin>>lin;
    cout<<"Digite os lugares por setor:";
    cin>>col;
    Contador t(lin,col);

    do{
        cout << "Teatro" << endl;
        cout<<"1-insere"<<endl;
        cout<<"2-remove"<<endl;
        cout<<"3-exibe"<<endl;
        cout<<"9-fim"<<endl;
        cout<<"Selecione: ";
        cin>>opc;

        switch(opc){
            case 1:
                cout<<"Setor:";
                cin>>setor;
                cout<<"Lugar:";
                cin>>lugar;
                if(t.isOcupado(setor,lugar)){
                    cout<<"lugar ocupado..."<<endl;
                }
                else{
                    t.insere(setor,lugar);
                }
                break;
            case 2:
                cout<<"Setor:";
                cin>>setor;
                cout<<"Lugar:";
                cin>>lugar;
                if(!t.isOcupado(setor,lugar)){
                    cout<<"lugar vazio..."<<endl;
                }
                else{
                    t.remover(setor,lugar);
                }

                t.remover(setor,lugar);
                break;
            case 3:
                for(int i=0;i<lin;i++){
                    for(int j=0;j<col;j++){
                        cout<<t.pegaValor(i,j)<<" ";
                    }
                    cout<<"\n";
                }
                cout<<"Total ocupado: "<<t.pegaValor()>>endl;
                break;
            case 9:
                cout<<"\nfim...\n\n"<<endl<<endl;
                break;
            default:
                cout<<"opcao invalida...."<<endl;
                break;
        }
    }while(opc != 9);
    return 0;
}
