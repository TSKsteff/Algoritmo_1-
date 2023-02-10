#include <iostream>

using namespace std;

int main()
{

   int vtr[5];
   int  media, pmr, maior, menor,prc;
   cout << " prenche o vetor"<< endl;
   for(int i=0; i<5; i++){
      cin >> vtr[i];
      if (i==0){
        pmr= vtr[i];
      }else if(pmr <= vtr[i]){
           maior = vtr[i];
      }else if (pmr >=vtr[i]){
           menor = vtr[i];
      }
      media = media + vtr[i];
      prc= prc + 1;

   }
   media = media / prc;
   cout << "menor temperatura : "<<menor<< endl;
   cout << "maior temperatura : "<<maior << endl;
   cout << "media temperatura : "<<media<< endl;
    return 0;

}
/**Em uma cidade do interior, sabe-se que, de janeiro a abril de 1976 (121 dias), não ocorreu temperatura inferior a 15ºC nem
superior a 40ºC. As temperaturas verificadas em cada dia devem ser lidas. Fazer um algoritmo que calcule e imprima:
• a menor temperatura ocorrida;
• a maior temperatura ocorrida;
• temperatura média;
• o número de dias nos quais a temperatura foi inferior à temperatura média.*/
