#include <iostream>
#include "pilha.h"
using namespace std;
int main()
{
    cout << "Analisando Expressao" << endl;
   int opc;
    char simbolo;
   unsigned int i;
   bool valido=true;
    string expressao;
    Pilha<char> p(50);
   do{
        cout<<"1-Nova Expressao"<<endl;
        cout<<"9-Fim..."<<endl;
        cout<<"Selecione:";
        cin>>opc;
        cin.sync();
        switch(opc){
        case 1:

            p.zeraPilha();
            cout<<"Digite a expressao:";
            getline(cin,expressao);
            cout<<"digitado:"<<expressao<<endl;
            i=0;
            valido=true;
            while(i<expressao.size()){
                simbolo=expressao.at(i); //.at(i) é o inicio do vetor
                if(simbolo=='{'||simbolo=='['||simbolo=='('){
                    p.empilha(simbolo);
                   }
                else{
                        if(simbolo=='}'||simbolo==']'||simbolo==')'){
                            if(p.pilhavazia()){
                                valido=false;
                                break;
                            }
                            else{
                                if(simbolo=='}'&&p.elementodotopo()=='{'){
                                    p.desempilha();
                                }
                                else{
                                    if(simbolo==']'&&p.elementodotopo()=='['){
                                        p.desempilha();
                                    }
                                    else{
                                        if(simbolo==')'&&p.elementodotopo()=='('){
                                            p.desempilha();
                                        }
                                        else{
                                            break;
                                        }
                                    }
                                }

                            }

                        }

            }
            i++;
            }//while
            if(valido && p.pilhavazia()){
                cout<<"expressao correta"<<endl;
            }
            else{
                cout<<"expressao invalida"<<endl;
            }
            for(int i=0;i<expressao.size();i++){
                cout<<expressao[i]<<endl;
            }

            break;
        case 9:
            cout<<"Fim..."<<endl;
            break;
        default:
            cout<<"opcao invalida..."<<endl;
            break;

        }
   }while(opc!=9);

    return 0;
}
