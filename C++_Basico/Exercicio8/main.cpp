#include <iostream>

using namespace std;

int main()
{
    int empregados;
    float salarioMinimo, custoBicicleta, bicicletaVendida;

    cout << "Numeros de empregados" << endl;
    cin>>empregados;
    cout << "Informe o Salario Minimo de Cada Funcionario \n Custo das Bicicletas \n Bicicletas vendidas"<<endl;
    cin>>salarioMinimo>>custoBicicleta>>bicicletaVendida;

    cout<< "Salario Final de Cada Funcionario "<< float(2 * salarioMinimo + (((custoBicicleta*15)/100)/empregados)) <<endl;
    cout<< "Lucro da Empresa"<< float (custoBicicleta + ((custoBicicleta*50)/100)) - (2 * salarioMinimo + (((custoBicicleta*15)/100)/empregados));
    return 0;
}
/**Uma loja vende bicicletas com um acr�scimo de 50 % sobre o seu pre�o de custo. Ela paga a cada vendedor 2 sal�rios-m�nimos mensais,
mais uma comiss�o de 15 % sobre o pre�o de custo de cada bicicleta vendida, dividida igualmente entre eles. Escreva um algoritmo que leia
o n�mero de empregados da loja, o valor do sal�rio-m�nimo, o pre�o de custo de cada bicicleta, o n�mero de bicicletas vendidas, calcule e escreva:
 o sal�rio final de cada empregado e o lucro (l�quido) da loja.
*/
