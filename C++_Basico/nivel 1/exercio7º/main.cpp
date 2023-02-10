#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num;

    cout << "digite um numero..: " << endl;
    cin >> num;
    if (num %2==0 && num %3==0){

                cout << "o numero digitado é par e divisel para 3" <<endl;


    }else if(num %2==0){
      cout << "numero é par e não divisel para 3 " << endl;
    }else if(num % 3==0){
      cout << " numero é divisivel por 3 e n é par";
    }else{

    cout << "\n steff lindo";
     }
    return 0;
}











/* Escreva um algoritmo que leia um número inteiro e verifique se ele é par e divisível por 3*/
