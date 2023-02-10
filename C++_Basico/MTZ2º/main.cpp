#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int mtz[3][5];
    for (int i=0; i<3; i++){
        for (int j=0; j<5; j++){
            mtz[i][j]=rand()%100;
            if (mtz[i][j]>100){
                mtz[i][j]=0;
            }
        }
    }
     for (int i=0; i<3; i++){
        for (int j=0; j<5; j++){
            cout << mtz[i][j]<<" ";
        }
        cout << endl;
    }


    return 0;
}
/**Faça um algoritmo que solicita ao usuário 15 valores reais e armazene em uma matriz 3x5 e exiba a matriz. A seguir,
   troque todos os elementos da matriz que sejam maiores do que 100 pelo valor zero e exiba a matriz novamente*/
