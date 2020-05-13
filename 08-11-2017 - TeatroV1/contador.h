#ifndef CONTADOR_H_INCLUDED
#define CONTADOR_H_INCLUDED

struct Contador{
    private:
       int contador;
       int teatro[][];
    public:

    Contador(int linha,int coluna){
        contador=0;
        teatro[linha][coluna];
        for(int i=0;i<linha;i++){
            for(int j=0;j<coluna;j++){
                teatro[linha][coluna]=0;
            }
        }
    }
    void insere(int linha, int coluna){
        teatro[linha][coluna]=1;
        incrementa();
    }
    void remover(int linha,int coluna){
        teatro[linha][coluna]=0;
        decrementa();
    }
    int pegaValor(int linha, int coluna){
        return teatro[linha][coluna];
    }
    bool isOcupado(int linha,int coluna){
        return teatro[linha][coluna]==1;
    }

    void incrementa(){
        contador++;
    }
    void decrementa(){
        contador--;
    }
    int pegaValor(){
        return contador;
    }
};



#endif // CONTADOR_H_INCLUDED
