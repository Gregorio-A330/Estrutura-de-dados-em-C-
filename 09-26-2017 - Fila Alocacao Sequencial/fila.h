#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

template <typename Tipo>
struct Fila{
    private:
        Tipo *v;
        int tamanho;
        int inic;
        int fim;
        int qtde;
    public:
        Fila(int tam){
        tamanho=tam;
        v=new Tipo[tamanho];
        fim=-1;
        inic=0;
        qtde=0;
    }
    ~Fila(){
        delete v;
    }
    void insere(Tipo x){
        fim++;
            if(fim==tamanho){
                fim=0;
            }
        v[fim]=x;
        qtde++;
    }
    Tipo remover(){
        Tipo temp=v[inic];
        inic++;
            if(inic==tamanho){
                inic=0;
            }
            qtde--;
            return temp;
    }
    Tipo primeiro(){
        return v[inic];
    }
    bool filaCheia(){
        return qtde==tamanho;
    }
    bool filaVazia(){
        return qtde==0;
    }
    int getTamanho(){
        return tamanho;
    }
    int getInic(){
        return inic;
    }
    int getQtde(){
        return qtde;
    }
    Tipo getValor (int pos){
        return v[pos];
    }
    Tipo getFim (){
        return v[fim];
    }



};

#endif // FILA_H_INCLUDED
