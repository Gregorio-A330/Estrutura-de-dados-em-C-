#include <iostream>
#include "recursiva.h"

using namespace std;

int main()
{
    cout<<"recursivas"<< endl;
    cout<<"fatorial de 5: "<<fatorial(5)<<endl;
    cout<<"fibonacci de 6: "<<fib(6)<<endl;
    for(int i=1;i<10; i++)
        cout<<"fibonacci de "<<i<<" = "<<fib(i)<<endl;
    cout<<"mdc(64,14)"<<mdc(64,14);
    return 0;
}
