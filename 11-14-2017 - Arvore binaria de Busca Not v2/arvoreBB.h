#ifndef ARVOREBB_H_INCLUDED
#define ARVOREBB_H_INCLUDED

using namespace std;
template <typename Tipo>
struct Node{
    Tipo info;
    Node<Tipo> *pEsq;
    Node<Tipo> *pDir;
};
template <typename Tipo>
struct Bst{
    Node<Tipo> *pRaiz;
    Bst(){
       pRaiz=NULL;
    }

    void insere(Node<Tipo> *&t,Tipo x){
        if(t == NULL){
            t=new Node<Tipo>;
            t->info=x;
            t->pEsq=NULL;
            t->pDir=NULL;
        }
        else{
            if(x<t->info){
                insere(t->pEsq,x);
            }
            else{
                if(x>t->info){
                    insere(t->pDir,x);
            }
            else{
                cout<<"elemento igual nao inserido: "<< x <<endl;
            }
            }
        }
    }
    bool arvoreVazia(){
        return pRaiz==NULL;
    }
    void preOrdem(Node<Tipo> *t){
        if(t != NULL){
            cout<<t->info<<" ";
            preOrdem(t->pEsq);
            preOrdem(t->pDir);

        }
    }
    void posOrdem(Node<Tipo> *t){
        if(t != NULL){
            posOrdem(t->pEsq);
            posOrdem(t->pDir);
            cout<<t->info<<" ";
        }
    }
    void emOrdem(Node<Tipo> *t){
        if(t != NULL){
            emOrdem(t->pEsq);
            cout<<t->info<<" ";
            emOrdem(t->pDir);
        }
    }




};





#endif // ARVOREBB_H_INCLUDED





