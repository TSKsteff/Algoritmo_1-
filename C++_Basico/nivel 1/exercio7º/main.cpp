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

                cout << "o numero digitado � par e divisel para 3" <<endl;


    }else if(num %2==0){
      cout << "numero � par e n�o divisel para 3 " << endl;
    }else if(num % 3==0){
      cout << " numero � divisivel por 3 e n � par";
    }else{

    cout << "\n steff lindo";
     }
    return 0;
}











/* Escreva um algoritmo que leia um n�mero inteiro e verifique se ele � par e divis�vel por 3*/
