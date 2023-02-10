#include <iostream>
#include<locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    int c, metros, comodo, piscina, Pmadeira, Acomodo, total;
    cout << "digite o tipo de contrução,  1= de madeira, 2=alvenaria, 3=pémoldado..:" << endl;
    cin >> c;
    switch(c){
case 1:
    cout << "Numero de metros quadrados da casa..:"<<endl;
    cin >>metros;
    Pmadeira= metros*200;
    cout << " Numeros de cômodos...:"<<endl;
    cin >> comodo;
    Acomodo=comodo*6000;
    cout << "com piscina";
    cin>> piscina;
    if (piscina==1){
            total=Acomodo + Pmadeira +20000;
        cout << "o valor total da construção, .." <<total<<endl;
    }else if (piscina ==0){
         total=Acomodo+Pmadeira;
         cout << "o valor total é ...:" << total;
    }
    break;
case 2:
    cout << "Numero de metros quadrados da casa..:"<<endl;
    cin >>metros;
    Pmadeira= metros*160;
    cout << " Numeros de cômodos...:"<<endl;
    cin >> comodo;
    Acomodo=comodo*2400;
    cout << "quer  casa com piscina, com = 1 / sem =0"<<endl;
    cin>> piscina;
    if (piscina==1){
            total=Acomodo + Pmadeira +20000;
        cout << "quer  casa com piscina, com = 1 / sem =0" <<endl;
    }else if (piscina==0){
         total=Acomodo+Pmadeira;
         cout << "o valor total é ...:" << total;
    }
    break;
case 3:
     cout << "Numero de metros quadrados da casa..:" << endl;
    cin >>metros;
    Pmadeira= metros*60;
    cout << " Numeros de cômodos...:";
    cin >> comodo;
    Acomodo=comodo*10000;
    cout << "quer  casa com piscina, com = 1 / sem =0" <<endl;
    cin>> piscina;
    if (piscina==1){
            total=Acomodo + Pmadeira +20000;
        cout << "o valor total da construção.." <<total<<endl;
    }else if (piscina ==0){
         total=Acomodo+Pmadeira;
         cout << "o valor total é ...:" << total;
    }
default:
    cout << "  steff é bnto";
    }
    return 0;
}
/*(Nível 2) Prepare um algoritmo para realizar o cálculo do custo de uma obra. Seu algoritmo deverá perguntar os seguintes
dados sobre a obra e informar o custo da obra.
- Tipo de construção (madeira, alvenaria ou pré-moldado);
- Nº de metros quadrados da casa;
- Nº de cômodos;
- Piscina (sim ou não).
Você deve usar a seguinte tabela para calcular o valor das obras:
Tipo de construção Preço por m2 Adicional por cômodo Piscina
Madeira 200,00 6000,00 20000,00
Alvenaria 160,00 2400,00 20000,00
Pré-moldado 60,00 10000,00 20000,00*/
