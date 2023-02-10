#include <iostream>

using namespace std;

int main()
{
    float notas=0, media;
    string alum;
    int cont=0, cont1=0,i,n;

    for ( i=0; i>=0; i++){
            cout << "digite 1 pra proseguir e 0 pra sair da estrura de repeticão..: " << endl;
    cin >> n;
            if (n==1){
        cout << " digite o nome do aluno..: "<< endl;
        cin >>alum;
            }else {
                break;
            }
        while (notas >=0){
            cout << " digite a nota do alumno, e um numero negativo pra ir pro proximo alumno..:" << endl;
            cin >> notas;
            cont1 = cont1 + notas;
        }
    }
          cont = cont + i;
         media = cont1/cont;
         cout << " a media de todos os alumnos..: " << media << endl;


    cout << "Hello world!" << endl;
    return 0;
}
