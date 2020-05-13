#ifndef CONTADOR_H_INCLUDED
#define CONTADOR_H_INCLUDED

struct Auditorio{
    private:
    int matriz[1][1];
    int contador;

    public:
        Auditorio(int linha, int coluna){
            contador=0;
            matriz[linha][coluna];
            for(int i=0;i<linha;i++){
                for(int j=0;j<coluna;j++){
                    matriz[i][j]=0;
                }
            }
        }
        void insere(int linha, int coluna){
            matriz[linha][coluna]=1;
            contador++;
        }
        void remover(int linha, int coluna){
            matriz [linha][coluna]=0;
            contador--;
        }
        int pegaValor(int linha, int coluna){
            return matriz[linha][coluna];
        }


};

#endif // CONTADOR_H_INCLUDED
