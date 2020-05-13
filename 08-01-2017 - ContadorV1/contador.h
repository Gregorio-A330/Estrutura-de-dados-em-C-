#ifndef CONTADOR_H_INCLUDED
#define CONTADOR_H_INCLUDED

void incrementa(int &x) /// '&' para pegar o endere�o da vari�vel 'contador' e fazer a altera��o
{
    x++;
}

void decrementa(int &x) /// '&' para pegar o endere�o da vari�vel 'contador' e fazer a altera��o
{
    if(x>0)
        x--;
}

int pegaValor(int x) /// n�o precisa do '&' neste caso, pois n�o haver� altera��o do valor (apenas exibi��o)
{
    return x;
}

#endif // CONTADOR_H_INCLUDED
