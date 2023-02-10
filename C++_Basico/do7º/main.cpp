#include <iostream>

using namespace std;

int main()
{
    int num,r1,cont;
    r1=1;
    cont=0;
    while(r1<=20){
    cout << "digte um numero..:" << endl;
    cin >> num;
    cont = cont + num;
    r1++;
    }
    cout << "a soma de todos os numero ...:"<<cont;
    return 0;
}
/*Faça um algoritmo que solicite vinte números e mostre a soma total dos números.
*/
