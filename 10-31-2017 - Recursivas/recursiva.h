#ifndef RECURSIVA_H_INCLUDED
#define RECURSIVA_H_INCLUDED

using namespace std;
//fatorial
double fatorial(int n){
    if(n==0)
        return 1;
    else{
        cout<<n<<endl;
        return n*fatorial(n-1);
    }
}
//fibonacci
double fib(int n){
    if(n<=2)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
//maximo divisor comum
int mdc(int x, int y){
    if(y==0)
        return x;
    else{
        cout<<x<<","<<y<<endl;
        return mdc(y,x%y);
    }

}

#endif // RECURSIVA_H_INCLUDED
