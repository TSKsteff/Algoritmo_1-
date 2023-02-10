#include <iostream>

using namespace std;

int main()
{
    int r1,num,so;
    r1=0;
    so=0;
    while (r1<=3){
    cout << "digite um numero..:" << endl;
    cin>> num;
    so=so+num;
     r1++;


    }
    cout << "a soma dos 10 numeros..:" <<so <<endl;
    return 0;
}
