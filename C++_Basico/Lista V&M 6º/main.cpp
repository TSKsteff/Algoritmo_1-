#include <iostream>

using namespace std;
///FUNCIONA
int main()
{
    int vtr[5],vtrb[5],fat;
    cout << " prencha o vetor : "<<endl;
    for (int i=0; i<5; i++){
        cin >> vtr[i];
    }
    for(int i=0; i<5; i++){
            fat=1;
            for (int j=1; j<=vtr[i]; j++){
             fat= fat*j;
             vtrb[i] = fat;
       }

    }
          cout << "---------"<< "\n o fatorial do vetor "<<endl;

    for (int i=0; i<5; i++){
        cout <<vtrb[i] <<",";
    }
    return 0;
}
/**Ler um vetor A com 15 elementos. Construir um vetor B de mesmo tipo, sendo que cada elemento do vetor B seja o fatorial do
elemento correspondente do vetor A*/
