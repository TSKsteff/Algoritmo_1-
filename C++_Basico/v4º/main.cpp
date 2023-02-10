#include <iostream>

using namespace std;

int main()
{
    int i,vtr[10],cont,soma=0;
     cout << "prencha o vetor de 10 posicoes..:  " << endl;
    for (i=0; i<=9; i++){
        cin>>vtr[i];
        if (vtr[i]%2==0){
       cont++;
    }
    }
    cout << "quantidade de numeros pares ..: " << cont << endl;
    return 0;
}
/**Preencher um vetor de 10 posições e informar a quantidade de números pares.
*/
