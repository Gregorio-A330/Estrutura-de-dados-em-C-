#include <iostream>
#include "ListaLinear.h"
#include "Triangulo.h"

using namespace std;

int main()
{
    cout << "Lista de Triangulos" << endl;
    Lista<Triangulo> lista(10);
    Triangulo t;
    cout<<"Digite o lado A:"<<endl;
    cin>>t.a;
    cout<<"Digite o lado B:"<<endl;
    cin>>t.b;
    cout<<"Digite o lado C:"<<endl;
    cin>>t.c;


    if(t.isTriangulo()){
        lista.insere(t);

    }

    else{
        cout<<"nao eh um triangulo"<<endl;
    }
    //exibindo

   if(lista.listaVazia()){
    cout<<"lista vazia.."<<endl;
   }
   else{
    for(int i=0;i<=lista.getIndice();i++){
        t=lista.getValor(i);
        cout<<"lado a:"<<t.a<<endl;
        cout<<"lado b:"<<t.b<<endl;
        cout<<"lado c:"<<t.c<<endl;
        cout<<"Perimetro: "<<t.pegaPerimetro()<<endl;
        cout<<"Area: "<<t.pegaArea()<<endl;
        cout<<"Tipo: "<<t.pegaTipo()<<endl;
    }
        return 0;
   }
}

