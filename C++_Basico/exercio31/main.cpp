#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int tl,l1,l2,l3;
    char tipo;
    cout << "digite oos lados do triangulo " << endl;
    cin>> l1>>l2>>l3;
if (l1<l2+l3 && l2<l1+l3 && l3<l1+l2 ){
    if (l1==l2==l3){
        cout << "triangulo equuilatero" << endl;
    }else if (l1 ==l2!=l3 ||l1 ==l3!=l2||l2 ==l3!=l1   ){cout<< "triangulo isosceles "<<endl;}
    else if (l1 != l2 !=l3) {cout << "triandulo escaleno"<<endl;}
}else {cout << " Dados invalidos para um triangulo ";}
    return 0;
}
/*/ (N�vel 2) Um tri�ngulo tem como regra de exist�ncia ter cada lado menor que a soma dos outros dois lados. Sabemos ainda
que podemos ter diferentes tipos de tri�ngulos: is�sceles (2 lados iguais), escaleno (3 lados diferentes) e equil�tero (3 lados
iguais). Crie uma l�gica para verificar se 3 valores fornecidos formam um tri�ngulo e qual o tipo do tri�ngulo.
*/
