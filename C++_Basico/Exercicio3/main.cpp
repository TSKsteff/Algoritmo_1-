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
/**Jo�o recebeu seu sal�rio de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) que est�o atrasadas.
 Como as contas est�o atrasadas, Jo�o ter� de pagar multa de 2% sobre cada conta. Fa�a um algoritmo que calcule e mostre
 quanto restar� do sal�rio do Jo�o.*/
