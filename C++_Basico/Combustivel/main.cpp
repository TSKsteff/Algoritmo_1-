#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    float km;
    float consumokml=0.2;
    float precoll=7;
    float gasosafn;
    cout<< "distancia a ser percorrida: ";
    cin>> km;
    cout<< "o consumo do automomvel em " << km << "km/" << consumokml<< "L" <<endl;
    consumokml= consumokml*km;
    cout<< "consumo do automovel por: " << km << " km rodados "  <<  consumokml <<" Litros" << endl;
    cout<< "preco da gasolina: " <<precoll << endl;
    cout<< "o valor de gasolina a ser pago: " <<"R$" <<precoll*consumokml <<endl;
    getch();
    return 0;
}
