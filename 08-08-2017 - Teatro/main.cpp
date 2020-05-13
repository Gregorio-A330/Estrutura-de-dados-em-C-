#include <iostream>
#include "contador.h"

using namespace std;

int main(){

    int lin=5;
    int col=10;
    Auditorio sesc(lin,col);
    for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            cout<<sesc.pegaValor(i,j)<<" ";
        }
            cout<<endl;
    }
}
