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
    cout << "\t* multiplica��o\n";
    cout << "t\ divis�o";
    cin >> operador;
    switch(operador){
case '+':
    cout<< "a soma dos numeros...:" <<x << " + " <<y <<"�...:" <<x+y ;
    break;
case '-':
    cout <<"a resta dos numeros...:" <<x <<" - " <<y <<"�...:" <<x-y ;
    break;
case '*':
    cout <<"a multiplica��o dos numeros...:" <<x <<" * " <<y <<"�...:" <<x*y ;
    break;
case '/':
    cout<< "a divis�o dos numeros...:" <<x <<" / " <<y <<"�...:" <<x/y ;
    break;
default:
    cout << "sla";
    }
    return 0;
}
