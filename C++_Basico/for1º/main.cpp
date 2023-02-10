/**#include <iostream>

using namespace std;

int main()
{
    for (int x=0; x<=50; x++){
    cout <<x << endl;
    }
    return 0;
}
Escreva um algoritmo que exiba todos os números inteiros de 0 a 50*/

/**#include <iostream>

using namespace std;

int main()
{
    for (int x=200; x>=100; x--){
    cout <<x << endl;
    }
    return 0;
}
Escreva um algoritmo que exiba todos os números inteiros de 200 a 100 (em ordem decrescente).
*/
#include <iostream>

using namespace std;

int main()
{
    for (int x=1; x<=100; x++){
            if (x%2!=0){
                        cout <<x << endl;
            }else if (x%2==0){
                 cout <<"----"<<endl;
            }
    }
    return 0;
}
/**Escreva um algoritmo que exiba todos os números ímpares do intervalo  [1 a 100].
*/
