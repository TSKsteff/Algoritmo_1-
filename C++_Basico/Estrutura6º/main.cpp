#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
      setlocale(LC_ALL, "portuguese");
    char operador;
    float  x, y;
    cout<< "digite seus numeros";
    cin >> x>>y;
    cout << "selecione um operando...:" << endl;
    cout << "\t+ soma\n";
    cout << "\t- resta\n";
    cout << "\t* multiplicação\n";
    cout << "t\ divisão";
    cin >> operador;
    switch(operador){
case '+':
    cout<< "a soma dos numeros...:" <<x << " + " <<y <<"é...:" <<x+y ;
    break;
case '-':
    cout <<"a resta dos numeros...:" <<x <<" - " <<y <<"é...:" <<x-y ;
    break;
case '*':
    cout <<"a multiplicação dos numeros...:" <<x <<" * " <<y <<"é...:" <<x*y ;
    break;
case '/':
    cout<< "a divisão dos numeros...:" <<x <<" / " <<y <<"é...:" <<x/y ;
    break;
default:
    cout << "sla";
    }
    return 0;
}
