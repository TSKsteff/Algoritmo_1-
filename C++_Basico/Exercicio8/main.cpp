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
/**Uma loja vende bicicletas com um acréscimo de 50 % sobre o seu preço de custo. Ela paga a cada vendedor 2 salários-mínimos mensais,
mais uma comissão de 15 % sobre o preço de custo de cada bicicleta vendida, dividida igualmente entre eles. Escreva um algoritmo que leia
o número de empregados da loja, o valor do salário-mínimo, o preço de custo de cada bicicleta, o número de bicicletas vendidas, calcule e escreva:
 o salário final de cada empregado e o lucro (líquido) da loja.
*/
