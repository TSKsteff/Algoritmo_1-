#include <iostream>

using namespace std;

int main()
{
    int quantidadeSanduiche, queijo=50, presunto=50, hamburguer = 100;
    cout << "Digite a quantida de Hamburguer " <<quantidadeSanduiche<< endl;
    cout << " A quantidade de queijo "<<((2*queijo)) *( quantidadeSanduiche)<< " A quantidade de presunto "<< endl;
    cout << "A quantida de Presunto " <<presunto * quantidadeSanduiche);
    cout << "A quantida de carne " <<hamburguer * quantidadeSanduiche);
    return 0;
}
/**A lanchonete Gostosura vende apenas um tipo de sandu�che, cujo recheio inclui duas fatias de queijo,
uma fatia de presunto e uma rodela de hamb�rguer. Sabendo que cada fatia de queijo ou presunto pesa 50 gramas,
e que a rodela de hamb�rguer pesa 100 gramas, fa�a um algoritmo em que o dono forne�a a quantidade de sandu�ches a fazer,
e a m�quina informe as quantidades (em quilos) de queijo, presunto e carne necess�rios para compra.
*/
