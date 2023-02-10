#include <iostream>

using namespace std;

int main()
{
    int mtr[2][6],cont;
    srand(time(NULL));
    cout << " preencha a matriz de 2 linhas e 6 colunas ; " << endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<6; j++){

              mtr[i][j] = rand()%45;
        }
    }
    for (int i=0; i<2; i++){
        for (int j=0; j<6; j++){
            cout << mtr[i][j] << "   ";
        }
        cout << endl;
    }
    for (int i=0; i<6; i++){
        cont = cont + mtr[2][i];
    }
    cout << "\n a soma da quarta coluna  ..: " << cont;
            return 0;

}
/**Com a mesma variável composta do exercício anterior, escrever o trecho de algoritmo que calcula o somatório dos elementos
da trigésima linha*/
