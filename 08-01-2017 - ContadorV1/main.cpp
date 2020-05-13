#include <iostream>
#include "contador.h"

using namespace std;

int main()
{
    int opc; // opc = opção
    int contador=0;

    do
    {
        cout << "Contador v1" << endl;  /// 'cout' = 'printf'; 'endl' = '\n'
        cout << "1-incrementar" << endl;
        cout << "2-decrementar" << endl;
        cout << "3-exibir" << endl;
        cout << "4-fim" << endl;
        cout << "Selecione: ";
        cin >> opc; /// 'cin' = 'scanf'

        switch(opc)
        {
        case 1:
            incrementa(contador);
            break;

        case 2:
            decrementa(contador);
            break;

        case 3:
            cout << "\nValor atual: " << pegaValor(contador) << endl;
            break;

        case 4:
            cout << "\nFim" << endl;
            break;

        default:
            cout << "Opcao invalida" << endl;
            break;
        }
    }while(opc!=4);

    return 0;
}
