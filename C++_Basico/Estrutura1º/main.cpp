
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num1, num2, num3;
    cout << "digite 3 numero..:";
    cin >> num1 >>num2>>num3;
    if (num1 > num2 && num1 > num3){
        cout << "numero maior é..:" <<num1;
    }else if (num2 > num1 && num2 > num3 ){
        cout << " numero maior é...:" << num2;

    }else if (num3 > num1 && num3 > num2 ){
      cout << "numero maior é ..:" << num3;
    }
}



