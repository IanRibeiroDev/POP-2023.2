/*
Número Primo

Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo.
Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.

Entrada: a entrada contém vários casos de teste.
A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100), indicando o número de casos de teste da entrada.
Cada uma das N linhas seguintes contém um valor inteiro X (1 < X ≤ 107), que pode ser ou não, um número primo.

Saída: para cada caso de teste de entrada, imprima a mensagem “X eh primo” ou “X nao eh primo”,
de acordo com a especificação fornecida.

Exemplo de Entrada:
3
8
51
7

Exemplo de Saída:
8 nao eh primo
51 nao eh primo
7 eh primo
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    // Como todos os numeros dividem por 1, ja levo em consideração no algoritmo
    // O contador vai ser comparado a X no final, para descobrir se X foi o único número com resto 0 ou se teve outro
    int n, x, contador = 2, divisores = 1;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;

        while(divisores == 1) {
            if (x % contador == 0) {
                divisores++;
            } else {
                contador++;
            }
        }

        if (contador == x) {
            cout << x << " eh primo\n";
        } else {
            cout << x << " nao eh primo\n";
        }

        contador = 2, divisores = 1;
    }
    return 0;
}