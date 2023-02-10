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
/**Faça um programa que calcula os gastos com combustível em uma viagem. O programa deve solicitar ao
usuário a distância a ser percorrida em Km, o consumo do carro em Km/litro e o preço do litro do combustível.
 Como resposta o programa deverá informar qual o valor em R$ a ser gasto com combustível na viagem.

*/
