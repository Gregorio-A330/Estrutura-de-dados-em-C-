#ifndef CONTADOR_H_INCLUDED
#define CONTADOR_H_INCLUDED

struct Auditorio{
    private:
    int linha, coluna;
    int *matriz;
    int contador;

    public:
    Auditorio(int lin, int col){
        linha=lin;
        coluna=col;
        contador=0;
        matriz = new int[linha*coluna];
        for(int i=0;i<linha;i++){
            for(int j=0;j<coluna;j++){
                matriz[coluna*i+j]=0;
            }
        }
    }

    ~Auditorio(){
        delete matriz;
    }


    void insere(int lin, int col){
        matriz[coluna*lin+col]=1;
        contador++;
    }




    void remover(int lin, int col){
        matriz[coluna*lin+col]=0;
        contador--;
    }

    int pegaValor(int lin,int col){
        return matriz[coluna*lin+col];
    }

    int pegaColuna(){
        return coluna;
    }
    int pegaLinha(){
        return linha;
    }

};


#endif // CONTADOR_H_INCLUDED
