#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n1, n2;
    float soma, substra, multi, divid;
    cout << "digite dois numeros" << endl;
    cin>> n1 >>n2;
    soma=n1+n2;
    cout<<"resultado da soma:" <<soma <<endl;
    substra=n1-n2;
    cout<<"resultado da subtra:" <<substra <<endl;
    multi=n1*n2;
    cout<<"resultado da multi:" <<multi <<endl;
    divid=n1/n2;
    cout<<"resultado da divid:" <<divid <<endl;
    getch();
    return 0;

}
