#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    float preco, total, porcentagemfn, porcentagem;


    cout << "digite o pre�o das nadadeiras...: " << endl;
    cin >> preco;
    cout << "digite a porcentagem de desconto...: ";
    cin >> porcentagem;
     porcentagemfn = porcentagem/100.0;
     total = preco *porcentagemfn;
     total = preco - total;

     cout << "o valor total das nadadeiras s�o...: " << total;

    return 0;
}
