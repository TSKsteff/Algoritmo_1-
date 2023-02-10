/*#include <iostream>

using namespace std;

int main()
{
    int cont,num;
    for (int i=1; i<=5; i++){
            cout << "digite um numero..: " <<endl;
            cin >> num;
        if (num>30){
            cont++;
        }
    }



    cout << "a quantidade de numeros maiores de 30 sao..: " <<cont<< endl;
    return 0;
}
/*Escreva um algoritmo que leia 15 números e escreva quantos números maiores que 30 foram digitados.
*/
/*#include <iostream>
#include <locale.h>
using namespace std;

int main(){

    int cont;
    cont=0;
    for (int i=0; i>=0;){

        cout << "digite um numero..: "<<endl;
    cin >>i;
          cont = cont + i;

    }
    cout << "o somatorio dos numeros digitados e..:" << cont<< endl;
       return 0;
}
/*Escreva um algoritmo que solicite N números e calcule o somatório dos números.
*/


    #include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    int num,cont, maior, menor, cont2;
    cont =0;
    cont2=0;
for (int i=0; i<=5; i++ ){
    cout << "digite um numero...:";
    cin >> num;
    if (i==1){
        cont =num;
        cont2 = num;
    }

    if (num > cont ){
         cont = num;
    }else if ( num < cont2){
          cont2= num;
    }
}
maior = cont;
menor = cont2;
cout << "numero maior é...: "<<maior<<endl;
cout << "numero menor é ...:"<< menor<<endl;

return 0;
}


    /*Solicite 20 números e informe qual o maior e o menor número
*/
