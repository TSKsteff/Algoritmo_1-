#include <iostream>

using namespace std;

int main()
{
    float salario = 1200.00, conta_1 = 200.00, conta_2 = 120.00, restanteSalarial;
    conta_1 = (conta_1 * 2)/100;
    conta_2 = (conta_2 * 2)/100;
    restanteSalarial = salario - (conta_1 + conta_2);
    cout << "O Restante do Salario de Jao foi de "<<restanteSalarial << endl;
    return 0;
}
/**João recebeu seu salário de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) que estão atrasadas.
 Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça um algoritmo que calcule e mostre
 quanto restará do salário do João.*/
