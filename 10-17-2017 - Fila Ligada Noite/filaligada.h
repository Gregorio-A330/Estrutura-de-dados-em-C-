#ifndef FILALIGADA_H_INCLUDED
#define FILALIGADA_H_INCLUDED
template<typename Tipo>
struct Node{
    Tipo info;
    Node<Tipo> *prox;
};
template<typename Tipo>
struct Fila{
    private:
        Node<Tipo> *inic;
        Node<Tipo> *fim;
    public:
        Fila(){
            inic=NULL;
            fim=NULL;
        }
        bool insere(Tipo x){
          bool v=false;
          Node<Tipo> *aux=new Node<Tipo>;//passo 1
          if (aux !=NULL){
                v=true;
                aux->info=x;//passp 2
                aux->prox=NULL;//passo 3
                if(inic==NULL){
                    inic=aux;//passo 4
                }
                else{
                    fim->prox=aux;//passo 5
                }
                fim=aux;//passo 6
          }
            return v;
        }
        Tipo remover(){
            Tipo temp = inic->info;
            Node<Tipo> *aux=inic;
            inic=inic->prox;
            delete aux;
            return temp;
        }

        Tipo primeiro(){
            return inic->info;
        }
        bool filavazia(){
            return inic==NULL;
        }
        Node<Tipo> *getInic(){
            return inic;
        }
        Node<Tipo> *getFim(){
            return fim;// criar variavel ponteiro para retorno de ponteiro
        }

};

#endif // FILALIGADA_H_INCLUDED
