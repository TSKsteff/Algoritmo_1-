#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portueguese");
    int n1,n2;

    cout << "digite dois numeros..: " << endl;
    cin >> n1>>n2;

    if (n1%2==0 && n2%2==0){
      cout << " os dois numeros são pares";
    }else if (n1%2!=0 && n2%2!=0){
               cout<< " os numeros não são impares";
    }else if (n1 %2==0 && n2%2!=0){
                cout<< "O PRIMEIRO É PAR E O SEGUNDO É ÍMPAR ";
    }else if (n1 %2!=0 && n2%2==0){
        cout<< "O PRIMEIRO É ÍMPAR E O SEGUNDO É PAR";
    }


    return 0;
}

/*. (Nível 2) A partir de dois números fornecidos pelo usuário, fazer um algoritmo para escrever umas das seguintes mensagens:
➢ OS DOIS SÃO PARES
➢ OS DOIS SÃO ÍMPARES
➢ O PRIMEIRO É PAR E O SEGUNDO É ÍMPAR
➢ O PRIMEIRO É ÍMPAR E O SEGUNDO É PAR
*/
