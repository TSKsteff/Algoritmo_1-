#include <iostream>

using namespace std;

int main()
{
    int num,r1,cont,me;
    r1=0;
    cont=1;


    cout << "digte um numero..:" << endl;
    cin >> num;
    do{
    if (num>0){
    cont = cont - num;
    r1++;}
    }while (r1<=10);
    me=r1;
    cout << "a soma de todos os numero ...:"<<me;
    return 0;
}
/*Solicite ao usuário um número inteiro e calcule o fatorial desse número.
*/
