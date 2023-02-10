#include <iostream>

using namespace std;
///FUNCIONA
int main()
{
    int vtr[5], vtrb[5], vtrc[5];
    cout << " prencha seu vetor .. : "<<endl;
    for (int i=1; i<=5; i++){
    cout<<"vtr A na posicao "<< i << endl;
        cin >> vtr[i];
    cout<<"vtr B na posicao "<< i << endl;;
        cin >> vtrb[i];
    }
    cout << " a subtracao do elemento correspondente de A com B" << endl;
    for (int i=1; i<=5; i++){
        vtrc[i] = vtr[i] - vtrb[i];

    }
    for (int i=1; i<=5; i++){
       cout <<vtrc[i] << endl;
    }
    return 0;
}
/**Ler dois vetores A e B com N elementos, onde N ≤ 100. Construir um vetor C, onde cada elemento de C é a subtração do
elemento correspondente de A com B*/
