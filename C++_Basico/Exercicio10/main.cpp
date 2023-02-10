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
/**Faça um algoritmo que solicite ao usuário UM número de 5 dígitos e mostre-o invertido*/
