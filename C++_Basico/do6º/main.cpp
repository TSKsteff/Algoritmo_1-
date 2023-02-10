#include <iostream>

using namespace std;

int main()
{
    int  r1,sl,media,perc=0, m;
r1=0;
media=0;
while(r1<3){
    cout << "digite seu salario..:" << endl;
    cin>>sl;


            media++;
            perc = perc + sl;


    r1++;
}
     m=perc/media;
    cout <<"a media de pessoas com salario 3
    43
    ..:"<<m<<endl;
    return 0;
}
