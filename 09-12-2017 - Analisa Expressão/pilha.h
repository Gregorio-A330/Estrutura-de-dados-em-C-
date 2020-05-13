#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
template <typename Tipo>
struct Pilha{
    Tipo *v;
    int topo;
    int tamanho;
    Pilha(int tam);
    ~Pilha();
    void empilha(Tipo x);
    Tipo desempilha();
    Tipo elementodotopo();
    bool pilhacheia();
    bool pilhavazia();
    int getTopo();
    Tipo getValor(int pos);
    int getTamanho();
    void zeraPilha();
};

template <typename Tipo>
Pilha<Tipo>::Pilha(int tam){
    tamanho = tam;
    topo = -1;
    v = new Tipo[tamanho];
}
template <typename tipo>
void Pilha<tipo>::zeraPilha(){
    topo = -1;
}

template <typename Tipo>
Pilha<Tipo>::~Pilha(){
    delete v;
}
template <typename Tipo>
void Pilha<Tipo>::empilha(Tipo x){
       topo++;
       v[topo]=x;
}
template <typename Tipo>
Tipo Pilha<Tipo>::desempilha(){
    Tipo temp = v[topo];
    topo--;
    return temp;
}
template <typename Tipo>
Tipo Pilha<Tipo>::elementodotopo(){
    return v[topo];
}
template <typename Tipo>
bool Pilha<Tipo>::pilhacheia(){
    return topo == tamanho-1;
}
template <typename Tipo>
bool Pilha<Tipo>::pilhavazia(){
    return topo == -1;
}
template <typename Tipo>
int Pilha<Tipo>::getTopo(){
    return topo;
}
template <typename Tipo>
Tipo Pilha<Tipo>::getValor(int pos){
    return v[pos];
}
template <typename Tipo>
int Pilha<Tipo>::getTamanho(){
    return tamanho;
}

#endif // PILHA_H_INCLUDED




