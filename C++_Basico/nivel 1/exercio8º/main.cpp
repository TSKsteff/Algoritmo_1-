#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num1, num2, soma;
    cout << "digite dois numeros..: " << endl;
    cin >> num1>>num2;
    soma = num1 + num2;
    cout << "Soma = " <<soma;

    return 0;
}














/* Fazer um algoritmo que leia dois números inteiros e imprima a soma entre eles. Antes de apresentar o resultado,
imprimir a mensagem: Soma =.*/
