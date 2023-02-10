#include <iostream>

using namespace std;

int main()
{
    int num,r1,cont,me;
    r1=0;
    cont=0;

    do{
    cout << "digte as idades..:" << endl;
    cin >> num;
    cont = cont + num;
    r1++;
    }while (r1<=10);
    me=cont/r1;
    cout << "a soma de todos os numero ...:"<<me;
    return 0;
}
/*Faça um algoritmo que solicite a idade de 10 pessoas e mostre a média das idades dessas pessoas.
*/
