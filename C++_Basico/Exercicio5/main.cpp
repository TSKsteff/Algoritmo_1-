#include <iostream>

using namespace std;

int main()
{
    float preco, combustivel, consumo;
    int distancia;
    cout <<"Preencha os valor indicados" << endl;
    cout <<"Distancia a ser Percorida "<<endl;
    cin >>distancia;
    cout <<"Consumo de Combustivel por km/litro"<<endl;
    cin>>consumo;
    cout<<"Custo do Combustivel"<<endl;
    cin>>preco;
    cout << " O Custo Total de Gasolina " << float ((distancia/consumo) * preco) <<" RS"<< endl;

    return 0;
}
/**Fa�a um programa que calcula os gastos com combust�vel em uma viagem. O programa deve solicitar ao
usu�rio a dist�ncia a ser percorrida em Km, o consumo do carro em Km/litro e o pre�o do litro do combust�vel.
 Como resposta o programa dever� informar qual o valor em R$ a ser gasto com combust�vel na viagem.

*/
