#include <iostream>

using namespace std;

int main()
{
    int numero, digito_1, digito_2, digito_3, digito_4, digito_5;
    cout << "Digite um Numero" << endl;
    cin>>numero;

    digito_1 = numero /10000;
        digito_2 = (numero /1000)%10;
            digito_3 = (numero /100)%10;
                digito_4 = (numero /10)%10;
                    digito_5 = numero %10;
    cout <<digito_5<<digito_4<<digito_3<<digito_2<<digito_1;


    return 0;
}
/**Fa�a um algoritmo que solicite ao usu�rio UM n�mero de 5 d�gitos e mostre-o invertido*/
