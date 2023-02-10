#include <iostream>
#include <time.h>
///FUNCIONA
using namespace std;

int main()
{
    float mtr[5][6], cont=0,conti=0;

     srand(time(NULL));
    for (int i=0; i<5; i++){
        for(int j=0; j<6; j++ ){
             mtr[i][j]=rand()%15;
        }
    }
    cout << "==================  ==============  ============="<< endl;
    for (int i=0; i<5; i++){
        for(int j=0; j<6; j++ ){
            cout << mtr[i][j] << "    ";

        }
        cout << endl;

    }

    cont = 6*5;
    system("pause");
    cout << "Quantos elementos fazem parte do conjunto?  " << cont << endl;
    cout << "Qual o conteúdo do elemento identificado por A[3, 4]?   " << mtr[3][4]<<endl;
    float x;
    x = mtr[2][3] + mtr [4][0];
    cout << "c) Qual o conteúdo de X após a execução do comando XA[2,3]+A[4,0]?  " << x <<endl;
    cout << "d) O que aconteceria caso fosse referenciado o elemento A[5, 1] no algoritmo?  " << mtr[5][1] << endl;
    float contm=0;
    for (int i=0; i<5; i++){
        contm = contm + mtr[i][4];
    }
    cout << "e) Somar os elementos da coluna de índice 4  : " << contm << endl;
    float contn=0;
    for (int i=0; i<6; i++){
        contn = contn + mtr[3][i];
    }
    cout <<  "f) Somar os elementos da linha de índice 3:  " << contn << endl;
    return 0;
}
/**. Seja a seguinte variável composta bidimensional A:
A
0 175 225 10 9000 3,7 4,75
1 9,8 100 363 432 156 18
2 40 301 30,2 6381 1 0
3 402 4211 7213 992 442 7321
4 21 3 2 1 9000 2000
0 1 2 3 4 5
a) Quantos elementos fazem parte do conjunto?
b) Qual o conteúdo do elemento identificado por A[3, 4]?
c) Qual o conteúdo de X após a execução do comando XA[2,3]+A[4,0]?
d) O que aconteceria caso fosse referenciado o elemento A[5, 1] no algoritmo?
e) Somar os elementos da coluna de índice 4
f) Somar os elementos da linha de índice 3*/
