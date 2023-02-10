#include <iostream>

using namespace std;

int main()
{
    int vtr[5], cont;
    cout << " preencha o vetor" << endl;
    for (int i=0; i<=4; i++){
        cin >> vtr[i];

    }
    cout << "======================================>>"<<endl;
    cout <<"vtr [";

    for (cont=0; cont<=5; cont++){
        cout <<vtr[cont]<<",";
    }
    cout << "]";
    return 0;
}
/**Preencher um vetor com 5 números inteiros digitados pelo usuário e exibir o vetor.
*/
