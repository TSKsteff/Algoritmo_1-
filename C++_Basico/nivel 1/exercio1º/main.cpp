#include <iostream>
#include <locale.h>
using namespace std;


    int main ()
{
    setlocale(LC_ALL, "portuguese");
int num, sucessor, antecessor ;

cout << "digite seu numero..: ";
cin >> num;
sucessor = num +1;
antecessor = num -1;
cout << "\n o antecessor do numero digitado �...: " << antecessor << "\n numero digitado �...: " << num << "\n sucessor do numero �..: " << sucessor;


return 0;
}


