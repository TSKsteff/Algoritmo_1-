#include <iostream>

using namespace std;

int main()
{
    int vtr[10], cont;
    cout << "prencha o vetor.."<< endl;
    for (int i=0; i<=9; i++){
        cin >> vtr[i];
        cont = cont + vtr[i];
    }
        cout << "a soma dos elementos do vetores..:"<< cont;
    return 0;
}
/**Preencher um vetor com 10 números inteiros e calcule o somatório números pares contidos no vetor.
*/
