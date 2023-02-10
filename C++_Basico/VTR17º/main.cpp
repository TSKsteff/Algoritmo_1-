#include <iostream>

using namespace std;

int main()
{
    int vtr[5],cont=0;
    cout << " preencha o vetor " << endl;
    for (int i=0; i<=4; i++){
        cin>> vtr[i];
        if (vtr[i]%2==0){
            cont = cont +1;
        }
    for (int i=0; i<=4; i++){
            cout << "vtr";
        cout << vtr[i];
    }
    }
    cout << "quantidade de numeros pares " << cont << endl;
    return 0;
}
/**Escreva um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantos valores pares existem no
vetor.*/
