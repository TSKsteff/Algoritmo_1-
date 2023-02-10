#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, n2, contp=0, conti=0;

     n1=0;
    if (n1>=0){
    while(n2>=0 ){


    if (n2>=0){
            cout<<"digite outro valor. digite um valor negativo p/ finalizar:"<< endl;
              cin>> n2;
            if (n2%2==0){
        cout<< "numero par!!"<<endl;
        contp++;

            }
            else if(n2%2!=0){
                    cout << "numero impar" <<endl;
                    conti++;
            }

    }
    cout << " quantidade de numeros impares"<<"\t"<< conti<< endl;
    cout << "quantidade de numeros pares"<< "\t"<<contp<< endl;
    }
}else if (n1<0){
    conti=0;
    contp=0;

    cout<<" um valor negativo foi informado loop finalizado"<< endl;
}

    return 0;
}
