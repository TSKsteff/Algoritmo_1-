#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int mtr[2][6],cont;
    srand(time(NULL));

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
    for (int i=0; i<2; i++){
        cont = cont + mtr[i][4];
    }
    cout << "\n a soma da quarta coluna  ..: " << cont;
            return 0;
}
/**Dada a variável bidimensional B, de 100 linhas por 200 colunas, escrever o trecho do algoritmo que calcula o somatório dos
elementos da quadragésima coluna.
*/
