#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num1;
    cout << "digite um numero entre 1 ou 5 ou 10..:";
    cin >> num1;
    switch(num1){
case 1:
    cout <<"\n numero é um";
    break;
case 5:
    cout <<" \n numero é cinco";
    break;
case 10:
    cout << "\n numero é dez";
    break;
default:
    cout << "\n numero invalido";
    }
return 0;
}
