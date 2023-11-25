/*
O professor Leônidas estava entediado e decidiu fazer a seguinte brincadeira na sala de aula.
Ele aleatoriamente irá atribuir um coeficiente K (0 <= K <= 100) e de acordo com o coeficiente recebido o aluno é classificado das seguintes formas:
- K de 0 a 30 é considerado filão iniciante;
- K de 31 a 59 é considerado esforçado;
- K de 60 a 100 é considerado filão esperto;

Dada uma lista com coeficientes de 5 alunos descubra quantos não são filões espertos.

Exemplo de Entrada:
2 39 99 22 13

Exemplo de Saída:
4
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

    int k1, k2, k3, k4, k5, resultado;
    cin >> k1 >> k2 >> k3 >> k4 >> k5;

    if (k1 < 60) {
        resultado++;
    }

    if (k2 < 60) {
        resultado++;
    }

    if (k3 < 60) {
        resultado++;
    }

    if (k4 < 60) {
        resultado++;
    }

    if (k5 < 60) {
        resultado++;
    }

    cout << resultado;
    return 0;
}