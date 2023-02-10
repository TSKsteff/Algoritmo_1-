#include <iostream>

using namespace std;

int main()
{
    float n1,n2,n3,mediafn;

    cout << "digite resultado da prova 1: ";
    cin>>n1;
    cout<< "digite resultado da prova 2: ";
    cin>>n2;
    cout<< "digite resultado da prova 3: ";
    cin>>n3;
    mediafn= (n1+n2+n3)/3.;
    cout<< "a media das provas sao: " << mediafn;

    return 0;
}
