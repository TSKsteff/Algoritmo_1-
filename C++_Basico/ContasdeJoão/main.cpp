#include <iostream>
#include <conio.h>
#
using namespace std;

int main()
{
    float c1=200.00;
    float c2=120.00;
    float SL=1200.00;
    float Ct;
    cout<<"Salario de joao equivale: " << SL << endl;
    cout<<" a conta1 de joao: " <<c1 <<endl;
    c1=c1+(c1*2)/100;
    cout<<"a conta1 de joao mais 2%= " << c1 <<endl;
    cout << "a conta2 de joao : "<<c2 <<endl;
    c2=c2+(c2*2)/100;
    cout << "a conta2 de joao mais 2%: " << c2 <<endl;
    cout << "quanto ficou do salario de joao: " << SL-(c1+c2);
    getch();
    return 0;
}
