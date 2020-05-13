#ifndef CONTADOR_H_INCLUDED
#define CONTADOR_H_INCLUDED

void incrementa(int &x) /// '&' para pegar o endereço da variável 'contador' e fazer a alteração
{
    x++;
}

void decrementa(int &x) /// '&' para pegar o endereço da variável 'contador' e fazer a alteração
{
    if(x>0)
        x--;
}

int pegaValor(int x) /// não precisa do '&' neste caso, pois não haverá alteração do valor (apenas exibição)
{
    return x;
}

#endif // CONTADOR_H_INCLUDED
