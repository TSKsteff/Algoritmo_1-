#include <iostream>

using namespace std;

int main()
{
    int i,vtr[10],cont=0;
     cout << "prencha o vetor de 10 posicoes..:  " << endl;
    for (i=0; i<=9; i++){
        cin>>vtr[i];
       cont++;
    }
    cout << "----------------- o inverso do vetor---------------"<<endl;
    for (cont=9; cont>=0; cont--){
        cout <<vtr[cont]<<endl;
    }
    return 0;
}
/**Preencher um vetor com 10 números digitados pelo usuário. Exiba o vetor na ordem inversa.
*/
