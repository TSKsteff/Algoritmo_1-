#include <iostream>

using namespace std;

int main()
{
    double comprimento, altura;
double azulejo, metroQ, valorG, azulejoT;

    cout << "informe o comprimento e altura da parede..: " << endl;
      cin >> comprimento >> altura;
      metroQ = comprimento * altura;
      cout << "o metro quadrado equivale a ..: " << metroQ << endl;
        azulejo = 19,90;
      azulejoT = azulejo * 9 ;
      cout << " o valor dos azulejos..: " <<azulejo <<endl;
      cout << "metro quadrado em azulejos..: " << azulejoT << endl;
      valorG = metroQ * azulejoT;
      cout << "o valor total gasto...: " << "R$"<< valorG;
    return 0;
}










 /*Numa loja de materiais de construção, um azulejo estampado custa R$ 14,90. Faça um algoritmo para ler o
comprimento e altura de uma parede (em metros), e depois escrever o valor gasto com a compra de azulejos. Considere que
um metro quadrado é formado por 9 azulejos.*/
