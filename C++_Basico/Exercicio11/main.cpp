#include <iostream>

using namespace std;

int main()
{
    int numero,digito_1, digito_2, digito_3, digito_4,resultadoSoma, resoltadoMultiplica,passo_3;
    cout << "Digite o Numero de 4 Digitos" << endl;
    cin>>numero;
    digito_1 = numero /1000;
        digito_2 = (numero /100)%10;
            digito_3 = (numero /10)%10;
                digito_4 = numero %10;
    resultadoSoma = digito_1+ digito_2+ digito_3+ digito_4;
    resoltadoMultiplica = digito_1* digito_2* digito_3* digito_4;
    passo_3 =  resoltadoMultiplica - resultadoSoma;
    cout << " O Codigo Verificador -> "<<passo_3%9;
    return 0;
}
/**
 Faça um programa para calcular e exibir o digito verificador de uma conta bancária.
 O usuário deve digitar o número da conta que deve ser um número inteiro com 4 dígitos. O digito verificador será calculado como segue:
Passo 1: Somar todos os quatro dígitos
Passo 2: Multiplicar todos os quatro dígitos
Passo 3: Subtrair o resultado da multiplicação (passo 2) pelo resultado da soma (passo 1)
Passo 4: O digito verificador será o resto da divisão do resultado da subtração (passo 3) por 9.

*/
