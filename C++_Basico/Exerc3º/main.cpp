#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    float n1, n2, n3;
    float soma,soma2, multi;
    cout<<"digite n1:";
    cin>> n1;
    cout<<"digite n2:";
    cin>>n2;
    soma= n1+n2;
    cout<<"resultado da soma:"<<soma <<endl;
    cout<<"digite n3:";
    cin >>n3;
    soma2= n2+n3;
    cout<<"resultado da soma n2 e n3:"<<soma2<<endl;
    multi= soma*soma2;
    cout<<"resultado da soma vezes a soma2:" << multi;
    getch();
    return 0;
}
