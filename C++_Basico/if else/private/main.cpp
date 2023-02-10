
 #include <iostream>

 #include <conio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    int n1, n2, n3, mediafn, aluno;
    cout << "digite a primeira nota..: ";
    cin >> n1;
    cout << "\n digite a segunda nota..:";
    cin >> n2;
    cout << "\n digite a terceira nota..:";
    cin >> n3;
    mediafn = (n1+n2+n3) /3;
    cout << "a media final é..:" << mediafn;
    cout << "\n qual aluno e qual media";
    cin >> aluno;

    switch (aluno){

        if (mediafn < 6){
            case0:
            cout << " vocé esta reprovado";
        }
        break;

        if (mediafn = 6 ){
            case1:
            cout << "se esforce suas notas atingiram a media ";
        }
        break;
        if (mediafn > 6 && mediafn <= 9){
            case 2:
            cout << "vocé foi aprovado";
        }
        break;
        if (mediafn = 10){
            case 3:
            cout << "vocé foi aprovado com nota maxima";
        }
        break;
            default:
                cout << "algo esta errado";


    }
    return 0;
    getch();
}
