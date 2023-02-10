#include <iostream>

using namespace std;

int main()
{
    int km, vm;
    float horas;

    cout << "informe a a distancia percorrida...: " << endl;
    cin>> km;
    cout << "informe horas percorridas...:" << endl;
    cin >> horas;

    horas = horas *60;
    vm = km / horas;
    if (vm > 110){
        cout << " velocidade media superior a 110km/h";
    }else {
        cout << "velocidade media inferior a 110km/h";
    }

    return 0;
}















/*Nível 1) Fazer um algoritmo que entre com uma distância (km) e o tempo de viagem (horas) de um automóvel, e dizer se a
velocidade média foi superior ao limite (110 km/h) ou não.
*/
