
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, divisivel;
    cout << "digite um numero...:";
    cin >> n1;
    divisivel = n1%2;
    if (divisivel == 0){
        cout << "numero � par";
    }else if(divisivel != 0) {
      cout << "numero impar";
    }
         return 0;
}





