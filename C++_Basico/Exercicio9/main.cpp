#include <iostream>

using namespace std;

int main()
{
    int  valorRetirado;
    int nota_10, nota_5, nota_1;
    cout << "Informe o Valor a ser Retirado" << endl;
    cin>> valorRetirado;
    nota_10 = valorRetirado / 10;
    nota_5 = (valorRetirado % 10)/5;
    nota_1 = ((valorRetirado % 10)%5) / 1;
    cout<< " O valor retirado sera entrengue em "<<nota_10<<" notas de 10 "<<nota_5<<" notas de 5 "<<nota_1<<" notas de 1"<<endl;

    return 0;
}
/**9) Fa�a um programa para um terminal de autoatendimento banc�rio que realiza saques em dinheiro.
O programa deve solicitar ao usu�rio qual o valor a ser retirado e deve exibir na tela qual a quantidade de cada c�dula
ser� entregue ao usu�rio. O programa sempre deve tentar utilizar o menor n�mero poss�vel de c�dulas. A m�quina possui apenas
 c�dulas de R$ 10, 5 e 1. Voc� deve exibir as vari�veis que cont�m a quantidade de c�dulas na seguinte ordem: 10,5,1.*/
