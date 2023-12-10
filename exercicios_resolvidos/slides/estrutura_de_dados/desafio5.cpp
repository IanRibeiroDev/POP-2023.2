/*
Zezinho é um professor de programação em um colégio de joão pessoa, e toda aula ele
faz a lista de presença de sua turma. O problema é que alguns de seus alunos são
travessos e fogem da aula, mas para não tomar falta, seus amigos assinam os nomes
deles na lista de presença. Por sorte, alguns nomes acabam saindo de forma repetida,
mas como zezinho é bondoso, ele vai apenas ignorar esse fato e adicionar apenas 1
presença por aluno

Dada o número de alunos e os seus nomes, diga para Zezinho a quantidade de alunos
que receberem a presença

Exemplo de Entrada:
3
joão
pedro
jose

7
rugal
jose
lucas
jose
rugal
rafael
isa

Exemplo de Saída:
3

5
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int casosTeste;
    string nome;
    set<string> nomes;
    cin >> casosTeste;

    while(casosTeste--) {
        cin >> nome;
        nomes.insert(nome);
    }

    cout << nomes.size() << "\n";

    return 0;
}