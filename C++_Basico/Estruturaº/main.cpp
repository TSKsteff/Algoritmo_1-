#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int idade;
    cout <<"digite sua idade..:";
    cin>> idade;
if (idade >= 18){
    cout << " voc� � maior de idade";
}
else if (idade < 18){
     cout << "voc� � menor de idade";
 }

    return 0;
}
