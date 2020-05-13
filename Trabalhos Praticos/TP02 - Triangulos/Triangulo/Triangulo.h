#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include <math.h>
#include <string.h>
using namespace std;

struct Triangulo{

     float a,b,c;

     bool isTriangulo() {
     return a<b+c && b<a+c && c<a+b;
     }
     float pegaPerimetro(){

     return a+b+c;

     }
    float pegaArea() {
    float sp=(a+b+c)/2;
    return sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    }
    string pegaTipo() {
     string t;
     if(a==b && b==c){
        t="equilatero";
        }
        else{
            if(a==b || b==c ||a==c){
                t="isoceles";
            }
            else{
                t="escaleno";
            }
        }
        return t;
    }



};

#endif // LISTA_H_INCLUDED
