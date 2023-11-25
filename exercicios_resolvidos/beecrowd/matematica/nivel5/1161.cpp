/*
Soma de Fatoriais

Leia dois valores inteiros M e N indefinidamente.
A cada leitura, calcule e escreva a soma dos fatoriais de cada um dos valores lidos.
Utilize uma variável apropriada, pois cálculo pode resultar em um valor com mais de 15 dígitos.

Entrada: o arquivo de entrada contém vários casos de teste.
Cada caso contém dois números inteiros M (0 ≤ M ≤ 20) e N (0 ≤ N ≤ 20).
O fim da entrada é determinado por eof.

Saída: para cada caso de teste de entrada, seu programa deve imprimir uma única linha, contendo um número que é a soma de ambos os fatoriais (de M e N).

Exemplo de Entrada:
4 4
0 0
0 2

Exemplo de Saída:
48
2
3
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    unsigned long long fatm = 1, fatn = 1;

    while(cin >> m >> n) {
        for(int i = m; i > 1; i--) {
            fatm *= i;
        }

        for(int i = n; i > 1; i--) {
            fatn *= i;
        }

        cout << fatm + fatn << "\n";
        fatm = 1;
        fatn = 1;
    }

    return 0;
}