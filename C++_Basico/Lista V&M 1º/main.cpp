#include <iostream>

using namespace std;
/// FUNCIONA
int main()
{

    int vtr[5], vtrb[5];
    cout  << " pencha o vector de 10 posicoes :" << endl;
    for (int i=0; i<5; i++){
        cin >> vtr[i];
    }
    for (int i=0; i<5; i++){
        cout << vtr[i[] << ","<<endl;
    }

    for (int i=0; i<5; i++){
        if (vtr[i]%2==0){
            vtr[i] = vtr[i]*5;
        }else if(vtr[i]%2!=0){
            vtr[i] = vtr[i]+5;
        }
    }
    cout << " --------"<<endl;
    for(int i=0; i<5; i++){
            vtrb[i] = vtr[i];
        cout << vtrb[i] << ", ";
    }
    return 0;
}
/**Desenvolver um programa que efetue a leitura de 10 elementos de um vetor A. Construir um vetor B de mesmo tipo, observando a
seguinte lei de forma��o: Se o valor do �ndice for par, o valor dever� ser multiplicado por 5, sendo �mpar dever� ser somado com
5. Ao final mostrar o conte�do dos dois vetores*/
