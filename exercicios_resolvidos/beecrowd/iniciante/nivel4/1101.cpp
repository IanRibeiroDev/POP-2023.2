/*
Sequência de Números e Soma

Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero).
Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).

Entrada: o arquivo de entrada contém um número não determinado de valores M e N.
A última linha de entrada vai conter um número nulo ou negativo.

Saída: para cada dupla de valores, imprima a sequência do menor até o maior e a soma deles, conforme exemplo abaixo.

Exemplo de Entrada:
5 2
6 3
5 0

Exemplo de Saída:
2 3 4 5 Sum=14
3 4 5 6 Sum=18
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    int maior, menor;
    int sum = 0;
    cin >> m >> n;

    while(m > 0 && n > 0) {
        if(m > n) {
            maior = m;
            menor = n;
        } else {
            maior = n;
            menor = m;
        }

        for(int i = menor; i < maior + 1; i++) {
            cout << i << " ";
            sum += i;
        }

        cout << "Sum=" << sum << "\n";

        sum = 0;
        cin >> m >> n;
    }

    return 0;
}