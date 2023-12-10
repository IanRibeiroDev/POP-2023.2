/*
Isabelle é tutora de N turmas, cada qual com ai alunos, do Projeto Code,
um projeto da FUNETEC para ensinar programação para os alunos das escolas municipais de João Pessoa.
Como as atividades estão chegando ao fim, ela quer presentear os seus alunos com algumas lembrancinhas.
Para isso, ela providenciou M lembrancinhas para dar aos seus alunos.
Sabendo que todos os alunos da sala devem receber lembrancinhas e que Isabelle quer
presentear a maior quantidade de salas possível, quantas salas podem ser presenteadas?

Entrada:
N - n° de turmas
M - quantidade de lembrancinhas
a1...an inteiros - quantidade de alunos em cada turma

Saída:
S - quantas salas ela consegue presentear

Exemplo de Entrada:
2 7
4 5

4 4
1 1 1 1

Exemplo de Saída:
1
4
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int qtdeTurmas;
    int qtdePresentes;
    vector<int> qtdeAlunos;
    int turmasPresenteadas = 0;
    int aux;

    cin >> qtdeTurmas >> qtdePresentes;

    while(qtdeTurmas--) {
        cin >> aux;
        qtdeAlunos.push_back(aux);
    }

    priority_queue<int, vector<int>, greater<int>> qtdeAlunosOrdenado(qtdeAlunos.begin(), qtdeAlunos.end());

    while(qtdeAlunosOrdenado.top() <= qtdePresentes && qtdePresentes > 0 && !qtdeAlunosOrdenado.empty()) {
        turmasPresenteadas++;
        qtdePresentes -= qtdeAlunosOrdenado.top();
        qtdeAlunosOrdenado.pop();
    }

    cout << turmasPresenteadas << "\n";
    return 0;
}