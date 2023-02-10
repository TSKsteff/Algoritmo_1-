#include <iostream>

using namespace std;

int main()
{
    int vtr[4], cont=0,cont2;
    cout << "preencha o vetor" << endl;
    for(int i=0; i<=3; i++){

        cin >> vtr[i];
        cont2=vtr[i];
        if (cont2/5==0){
            cont = cont +1;
        }
    }
    cout << " a quantidade de numeros multiplos de 5sao..: " << cont;
    return 0;
}
/**Preencha um vetor com 20 números inteiros e calcule a quantidade de números múltiplos de 5 contidos no vetor*/
