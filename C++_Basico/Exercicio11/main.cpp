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
 Fa�a um programa para calcular e exibir o digito verificador de uma conta banc�ria.
 O usu�rio deve digitar o n�mero da conta que deve ser um n�mero inteiro com 4 d�gitos. O digito verificador ser� calculado como segue:
Passo 1: Somar todos os quatro d�gitos
Passo 2: Multiplicar todos os quatro d�gitos
Passo 3: Subtrair o resultado da multiplica��o (passo 2) pelo resultado da soma (passo 1)
Passo 4: O digito verificador ser� o resto da divis�o do resultado da subtra��o (passo 3) por 9.

*/
