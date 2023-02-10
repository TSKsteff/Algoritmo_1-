#include <iostream>

using namespace std;
///FUNCIONA
int main()
{
    int vtr[5], cont=0;
     cout << " prencha o vetor  : " << endl;
    for(int i=0; i<5; i++){
        cin >> vtr[i];
        if ( vtr[i]%2!=0){
            cont = cont + vtr[i];
        }
    }
    cout <<"--------------"<<endl;
    for (int i=0; i<5; i++){
         cout << vtr[i] <<"," ;
    }
    cout << "\n a soma dos numeros impares..: " <<cont;
    return 0;
}
/**. Desenvolver um programa que efetue a leitura de 5 elementos de um vetor A. No final, apresente a soma de todos os elementos
que sejam ímpares.*/
