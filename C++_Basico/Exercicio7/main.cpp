#include <iostream>

using namespace std;

int main()
{
    int alunoReprovadosC,alunoReprovadosD;
    cout << "Digite a Quantidade de Alunos Reprovados Turma C e D " << endl;
    cin>> alunoReprovadosC>>alunoReprovadosD;
    cout<<" o Percentual de Reprovacao na Turma C : "<<float ((alunoReprovadosC * 60)/100)<<endl;
    cout<<" o Percentual de Reprovacao na Turma C : "<<float ((alunoReprovadosD * 20)/100)<<endl;
    return 0;
}
/**7) A turma C � composta de 60 alunos, e a turma D de 20 alunos. Escreva um algoritmo que leia o percentual de alunos
reprovados na turma C, o percentual de aprovados na turma D, calcule e escreva:
a) O n�mero de alunos reprovados na turma C.
b) O n�mero de alunos reprovados na turma D.
c) A percentagem de alunos reprovados em rela��o ao total de alunos das duas turmas.
*/
