
#include <iostream>

using namespace std;

int main()
{
    int media ,alt, maior, menor, cont,cont1=0, cont2=0;
    string sexo;
    for (int i=1; i<=5; i++){

        cout << "digite o seu genero e altura ..:"<< endl;
        cin>> sexo >> alt;
        if (i==1){
                maior = alt;
                menor = alt;
            }
            if (alt > maior){
                maior = alt;
            }
             if (alt < menor){
                    menor = alt;
            }
            if (sexo == "masc"){
                     cont ++;

            }
            if (sexo == "fem" ){
                cont1++;
                cont2 = alt +cont2;

            }



    }
    media = cont2/cont1;
    cout << " a media da altura das mulheres ...: " << media<<endl;
    cout << "maior altura e ..: " << maior <<endl << "menor altura e..: " << menor<<endl;
    cout << "o numero de homens ..:" <<cont <<  endl;
    return 0;
}
/*(Nível 3) Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de 50 pessoas. Fazer um algoritmo
que calcule e escreva:
• a maior e a menor altura do grupo;
• a média de altura das mulheres;
• o número de homens.*/
