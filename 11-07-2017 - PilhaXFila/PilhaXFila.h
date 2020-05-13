#ifndef PILHAXFILA_H_INCLUDED
#define PILHAXFILA_H_INCLUDED

template <typename Tipo>
struct Pilha{
    private:
     Tipo *v;
     int topo;
     int tamanho;
    public:
        Pilha(int tam){
            tamanho = tam;
            v = new Tipo[tamanho];
            topo=-1;
        }
        ~Pilha(){
            delete v;
        }
        void empilha(Tipo x){
            topo++;
            v[topo]=x;
        }
        Tipo desempilha(){
            Tipo temp=v[topo];
            topo--;
            return temp;
        }
        Tipo elementoDoTopo(){
            return v[topo];

        }

        bool pilhaCheia(){
            return topo==tamanho-1;
        }
        bool pilhaVazia(){
            return topo==-1;
        }
        int getTopo(){
            return topo;
        }
        int getTamanho(){
            return tamanho;
        }
        Tipo getValor(int pos){
            return v[pos];
        }

};


template <typename Tipo>
struct Fila{
    private:
        Tipo *vet;
        int tamanho;
        int inic;
        int fim;
        int qtde;
    public:
        Fila(int tam){
        tamanho=tam;
        vet=new Tipo[tamanho];
        fim=-1;
        inic=0;
        qtde=0;
    }
    ~Fila(){
        delete vet;
    }
    void insere(Tipo x){
        fim++;
            if(fim==tamanho){
                fim=0;
            }
        vet[fim]=x;
        qtde++;
    }
    Tipo remover(){
        Tipo temp=vet[inic];
        inic++;
            if(inic==tamanho){
                inic=0;
            }
            qtde--;
            return temp;
    }
    Tipo primeiro(){
        return vet[inic];
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
        return vet[pos];
    }
    Tipo getFim (){
        return vet[fim];
    }



};

#endif // PILHAXFILA_H_INCLUDED
