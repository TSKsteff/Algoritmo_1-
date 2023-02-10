#include <iostream>
#include <locale.h>
using namespace std;

int main(){

    setlocale(LC_ALL, "portuguese");
    int n1;
     n1=100;
    while (n1>=50){
            cout << "\n"<< n1;
        n1--;
    }
return 0;

}
