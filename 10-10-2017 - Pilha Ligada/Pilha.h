#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

template <typename Tipo>
struct Node{
    Tipo info;
    Node<Tipo> *prox;
};
template <typename Tipo>
struct Pilha{
    private:
    Node<Tipo> *topo;
    public:
    Pilha(){
        topo=NULL;
    }
    bool pilhavazia(){
        return topo==NULL;
    }

    bool empilha(Tipo x){
        bool t=false;
        //1-aloca
        Node<Tipo> *aux=new Node<Tipo>;
        if(aux != NULL){
            t=true;
            //2-"guarda info"
            aux->info=x;
            //3-
            aux->prox=topo;
            //4-
            topo=aux;
        }
        return t;
    }
    Tipo desempilha(){
        Tipo temp=topo->info;
        Node<Tipo> *aux=topo;
        topo=topo->prox;
        delete aux;
        return temp;
    }
    Tipo elementoDoTopo(){
        return topo->info;
    }
    //Retorna um Ponteiro//
    Node<Tipo> *getTopo(){
            return topo;
    }
};

#endif // PILHA_H_INCLUDED
