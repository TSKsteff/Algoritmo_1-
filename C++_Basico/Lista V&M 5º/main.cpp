#include <iostream>
#include <math.h>
using namespace std;
///FUNCIONA
int main()
{
    int vtr[5],vtrb[5];
    cout << "prencha seu vetor : "<<endl;
    for (int i=0; i<5; i++){
        cin >> vtr[i];
    }
    cout <<"---------------" << "\n o quadrado do vector" <<endl;
    for(int i=0; i<5; i++){
    vtrb[i]=pow(vtr[i],2);
    cout << vtrb[i] << ", ";
    }
    return 0;
}
/**Ler 15 elementos de um vetor A. Construir um vetor B de mesmo tipo. Observando a lei de formação: “Todo elemento de B deverá
ser o quadrado do elemento de A correspondente”.*/
