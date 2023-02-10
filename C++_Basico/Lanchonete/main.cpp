#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float Qj=50;
    float Pr=50;
    float Ham=100;
    float Pt=1000, lanch1;
    cout<<"digite a quantidade de lanche: ";
    cin >>lanch1;
    Qj= (lanch1*Qj) /Pt;
    Pr= (lanch1*Pr) /Pt;
    Ham= (lanch1*Ham) /Pt;
    cout<< "quantidade de queijo para compra: " <<Qj <<"kg" <<endl;
    cout<< "quantidade de presunto para comprar: " <<Pr <<"kg"<<endl;
    cout<< "quantidade de hamburguer para comprar: " <<Ham <<"kg"<< endl;



    return 0;
}
