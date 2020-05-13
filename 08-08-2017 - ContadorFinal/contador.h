#ifndef CONTADOR_H_INCLUDED
#define CONTADOR_H_INCLUDED

struct Contador{
    private:
    int contador;

    public:
    Contador(){
        contador=0;
    }
    Contador(int valor){
        contador=valor;
    }
    void incrementa()
    {
        contador++;
    }

    void decrementa()
    {
        if(contador>0)
           contador--;
    }

    int pegaValor()
    {
        return contador;
    }
};

#endif // CONTADOR_H_INCLUDED
