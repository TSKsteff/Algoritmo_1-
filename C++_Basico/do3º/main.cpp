#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, n2, contp, conti;
    n1=0;
    while(n1<=4){
            cout << "diite um numero"<< endl;
              cin>> n2;
            if (n2%2==0){
        cout<< "numero par!!"<<endl;
        contp++;

            }
            else if(n2%2!=0){
                    cout << "numero impar" <<endl;
                    conti++;
            }

            n1++;
    }
    cout << " quantidade de numeros impares"<<"\t"<< conti<< endl;
    cout << "quantidade de numeros pares"<< "\t"<<contp<< endl;
    return 0;
}
