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
    if(num%2==0){
    cont = cont + num;
    }
    r1++;
    }
    cout << "a soma de todos os numero pares s�o ...:"<<cont;
    return 0;
}
/**Fa�a um algoritmo que solicite vinte n�meros e mostre a soma total dos n�meros positivos.

*/
