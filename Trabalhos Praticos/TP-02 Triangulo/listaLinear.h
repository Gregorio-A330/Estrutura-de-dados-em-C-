#ifndef LISTALINEAR_H_INCLUDED
#define LISTALINEAR_H_INCLUDED

template <typename Tipo>

struct Lista{
    private:
        Tipo *v;
        Tipo temp;
        int qtde;
        int tamanho;
        int indice;

    public:
        Lista(int tam){
            tamanho = tam;
            qtde = 0;
            indice = -1;
            v = new Tipo[tamanho];
        }
        ~Lista(){
            delete v;
        }
        bool listaVazia(){
            return qtde==0;
        }
        bool listaCheia(){
            return qtde==tamanho;
        }
        void insere(Tipo x){
            indice++;
            v[indice] = x;
            qtde++;
        }
        Tipo remover(){
            int temp = v[indice];
            indice--;
            qtde--;
            return temp;
        }
        int getQtde(){
            return qtde;
        }
        int getTamanho(){
            return tamanho;
        }
        int getIndice(){
            return indice;
        }
        Tipo getValor(int pos){
            return v[pos];
        }
};
#endif // LISTALINEAR_H_INCLUDED


