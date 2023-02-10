#include <iostream>

using namespace std;

int main()
{
    float nota_1, nota_2, nota_3,media;
    cout << "Digite sua Tres Notas" << endl;
    cin >>nota_1>>nota_2>>nota_3;
    media  =  ((nota_1 * 2)/10) + ((nota_2 * 4)/10)) + ((nota_3 * 6)/10);
    cout<< " media final igual " << float (media);
    return 0;
}
/**O sistema de avaliação de determinada disciplina, é composto por três provas. A primeira prova tem peso 2,
a segunda tem peso 4 e a terceira prova tem peso 6. Faça um programa que solicita as notas para o aluno, calcula e exibe a média final deste aluno.*/
