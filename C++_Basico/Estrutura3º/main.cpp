#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num, num2;
    cout << "digite os numero de 1 a 3..:" << endl;

    cin >> num ;


    switch (num ){
case 1:
    cout<< "digite qualquer numero...:";
    cin>>num2;

    if (num2 % 2 ==0){
        cout << "\n numero par";
    }else{
    cout << "\n numero impar";
    }

    break;
case 2:
    cout<< "digite qualquer numero...:";
    cin>>num2;
    if (num2 <0){
        cout << "numero negativo";
    }else if (num2 == 0){
        cout <<"numero nulo";
    }else if (num2 >0){
       cout << "numero positivo";
    }
    break;
case 3:
    cout<< "digite um Ano...:";
    cin >> num2;
    if (num2%400==0 || num2%4 ==0) {
        cout << "ano bissexto";

    }else if ( num2 /100!=0){
     cout << "ano n bissexto";
    }
    break;

default:
    cout << "sla";

}
}
