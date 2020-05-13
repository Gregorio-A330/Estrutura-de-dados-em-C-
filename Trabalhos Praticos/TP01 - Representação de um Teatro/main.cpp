#include <iostream>
#include "contador.h"
using namespace std;

int main()
{
    int lin=10;
    int col=10;
    Auditorio sesc(lin,col);
    cout << "SESC SANTOS" << endl;
    for(int i=1;i<=lin;i++){
        cout<<i<<" - ";
        for(int j=1;j<=col;j++){
            cout<<sesc.pegaValor(i-1,j-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
