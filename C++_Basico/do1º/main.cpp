#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1;

    do {
        cout << "digite seu numero ..:" << endl;
        cin >> n1;
            if (n1%2==0){
                cout << "\n numero par"<<endl;
            }else {
            cout << "\n numero impar"<<endl;
            }


    }while ( n1>0);

    return 0;
}
