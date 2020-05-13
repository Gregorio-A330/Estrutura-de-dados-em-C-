#ifndef FILADUPLA_H_INCLUDED
#define FILADUPLA_H_INCLUDED

template <typename Tipo>
struct Fila{
    private:
        Tipo *v;
        int tamanho;
        int inic;
        int inic2;
        int fim;
        int fim2;
        int qtde;
        int qtde2;
    public:
        Fila(int tam){
        tamanho=tam;
        v=new Tipo[tamanho];
        fim=-1;
        fim2=tamanho+1;
        inic=0;
        inic2=tamanho;
        qtde=0;
        qtde2=tamanho;
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
    void insere2 (Tipo x){
        fim2--;
            if(fim2==0){
                fim2=inic2;
            }
        v[fim2]=x;
        qtde2--;

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

    Tipo remover2(){
        Tipo temp=v[fim2];
            inic2--;
            if(fim2==0){
                fim2=tamanho;
            }
            qtde2++;
            return temp;
    }

    Tipo primeiro(){
        return v[inic];
    }
    bool filaCheia(){
        return qtde==tamanho;
    }
    bool filaCheia2(){
        return qtde2=tamanho;
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

#endif // FILADUPLA_H_INCLUDED
