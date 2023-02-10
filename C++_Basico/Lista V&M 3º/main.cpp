#include <iostream>

using namespace std;
///FUNCIONA
int main()
{
    int vtr[5],vtrb[5];
    cout << " prencha o vetor : " << endl;

    for (int i=0; i<5; i++){
        cin >>vtr[i];
    }
    for (int i=0; i<5; i++){
            vtrb[i] = vtr[i] * 3;
           }
    for ( int i=0; i<5; i++){
        cout << vtrb[i] << ",";
    }

    return 0;
}
/**Ler 8 elementos em um vetor A. Construir um vetor B de mesma dimensão com os elementos do vetor A multiplicados por 3.
Apresentar o vetor B. O elemento B[0] deverá ser o resultado de A[0] * 3, o elemento B[1] o resultado de A[1] * 3, e assim por
diante, até 7.
*/
