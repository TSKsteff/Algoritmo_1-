#include<iostream>

using namespace std;

int main (){

int i,ciclos,soma1=1, soma2=0,temp;

cout<<"Insira os ciclos..";

cin>>ciclos;

for(i=1;i<ciclos; i++){

  temp=soma1;
  soma1=soma1+soma2;
  soma2=temp;
  cout<<soma1<<endl;
}

return 0;
}
