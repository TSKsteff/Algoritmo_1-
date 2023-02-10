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
/**9) Faça um programa para um terminal de autoatendimento bancário que realiza saques em dinheiro.
O programa deve solicitar ao usuário qual o valor a ser retirado e deve exibir na tela qual a quantidade de cada cédula
será entregue ao usuário. O programa sempre deve tentar utilizar o menor número possível de cédulas. A máquina possui apenas
 cédulas de R$ 10, 5 e 1. Você deve exibir as variáveis que contêm a quantidade de cédulas na seguinte ordem: 10,5,1.*/
