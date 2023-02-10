#include <iostream>

using namespace std;

int main()
{
      setlocale(LC_ALL, "portuguese");
      int tempo;
      float  massa;
      cout << " digite a quantidade de gramas radioctivas...: " << endl;
      cin >> massa;

      for (tempo=50; massa>=0.5; tempo = tempo+50){
            massa=massa/2;

      }


      cout << " o tempo total calculado : " <<"\n" <<tempo << " segundos" << endl;
      cout << " a massa final é : " << "\n" << massa << endl;

    return 0;
}
/**Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa inicial, em
gramas, fazer um algoritmo que determine o tempo necessário para que essa massa se torne menor do que 0,5 grama.
Escreva a massa inicial, a massa final e o tempo calculado em segundos*/




