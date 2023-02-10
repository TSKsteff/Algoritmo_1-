
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
  setlocale(LC_ALL, "portuguese");
  int n1,contp,conti, cont, cont1,cont2;
    cout<< "digite um numero:"<< endl;
     cin>> n1;
     cont1=0;
     cont2=0;
  while(n1>=0 ){
    if (n1% 2 == 0){
            cont1++;
     cout << "par" << "\t"<<cont1 <<"º"<< endl;

}
    else if(n1%2!=0){
            cont2++;
     cout << "impar" << "\t"<< cont2 <<"º"<< endl;

}

    cout<<"digite outro valor. digite um valor negativo p/ finalizar:"<< endl;
     cin>>n1;
}

 cout  <<"quantidade de numeros impares...:" << cont1<<endl;
 cout << "quantidade de numeros pares..: " <<cont2<<endl;
return 0;
}
