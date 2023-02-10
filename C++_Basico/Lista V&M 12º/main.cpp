#include <iostream>
#include <time.h>
using namespace std;

int main()
{

     int mtr[n1][n2],cont=0;
     cout " digite a dimensao da matriz " << endl;
     cin >> n1,n2;
     for (int i=0; i<n1; i++){
        for (int j=0; j<n2; j++){
            cin >> mtr[n1][n2];
            cont = cont + mtr[n1][n2];
        }
     }
     for (int i=0; i<n1; i++){
        for (int j=0; j<n2; j++){
            cout <<  mtr[n1][n2] << "  ";

        }
        cout << endl;
     }
 cout << "\n----------------------" << endl;
 cout << " a soma de todas as variaveis é..: " << cont<<endl;

    return 0;
}
/**Fazer um algoritmo que:
a) Leia duas variáveis compostas bidimensionais de dimensão m x n (m ≤ 20, n ≤ 30). Os valores de m e n são fornecidos
inicialmente. A seguir, são informadas cada uma das linhas de cada uma das variáveis;
b) Calcule e imprima a soma destas variáveis.
*/
