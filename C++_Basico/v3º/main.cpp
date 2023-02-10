#include <iostream>

using namespace std;

int main()
{

    int i,vtr[10],cont,soma=0;
     cout << "prencha o vetor de 10 posicoes..:  " << endl;
    for (i=0; i<=9; i++){
        cin>>vtr[i];
       cont++;
    }
    cout << "----------------- a soma dos vetores---------------"<<endl;
    for (cont=9; cont>=0; cont--){
        soma = soma +vtr[cont];

    }
    cout << soma << endl;
    return 0;
}
/**Ler um vetor de 10 posições. Em seguida, calcule e apresente o somatório dos valores contidos no vetor*/
