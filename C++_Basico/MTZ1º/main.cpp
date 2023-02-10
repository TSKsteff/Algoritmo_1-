#include <iostream>

using namespace std;

int main()
{
    int mtz[5][5];
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++)
            mtz[i][j]=1;
    }
     for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            cout << mtz[i][j]<<" ";
        }
        cout << endl;
    }


    return 0;
}
/**Faça um algoritmo que preencha uma matriz de 5x5 com o elemento 1 em todas as posições e exiba a matriz.
*/
