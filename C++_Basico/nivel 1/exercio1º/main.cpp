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
cout << "\n o antecessor do numero digitado é...: " << antecessor << "\n numero digitado é...: " << num << "\n sucessor do numero é..: " << sucessor;


return 0;
}


