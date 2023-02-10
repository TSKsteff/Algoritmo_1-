#include <iostream>

using namespace std;

int main()
{
    int num,num1,n1,x,cont;
    cout << "digite dois numeros ..: " << endl;
    cin >> num>>num1;

    for (x=num; num<=num1; x++){

             if (num%2!=0){

          n1 = n1 + num;
            num++;


       }

       if (num%2==0){

         n1 = n1 + num;
         num+=2;
       }

    }

    cout << "a soma dos numeros positivos ..:" << n1 << endl;

    return 0;
}
