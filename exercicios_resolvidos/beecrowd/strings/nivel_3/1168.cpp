/*
LED

João quer montar um painel de leds contendo diversos números.
Ele não possui muitos leds, e não tem certeza se conseguirá montar o número desejado.
Considerando a configuração dos leds dos números abaixo,
faça um algoritmo que ajude João a descobrir a quantidade de leds necessário para montar o valor.

1234567890

Entrada: a entrada contém um inteiro N, (1 ≤ N ≤ 1000) correspondente ao número de casos de teste, seguido de N linhas,
cada linha contendo um número (1 ≤ V ≤ 10100) correspondente ao valor que João quer montar com os leds.

Saída: para cada caso de teste, imprima uma linha contendo o número de leds que João precisa para montar o valor desejado,
seguido da palavra "leds".

Exemplo de Entrada:
3
115380
2819311
23456

Exemplo de Saída:
27 leds
29 leds
25 leds


Comentários extras:

A lógica do problema é baseada na representação de cada número em um display de LED de 7 segmentos.

Cada dígito é representado por um conjunto de LEDs,
e diferentes dígitos requerem um número diferente de LEDs para serem representados.

0: 6 LEDs
1: 2 LEDs
2: 5 LEDs
3: 5 LEDs
4: 4 LEDs
5: 5 LEDs
6: 6 LEDs
7: 3 LEDs
8: 7 LEDs
9: 6 LEDs
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, qtde = 0;
    string valor;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> valor;

        for (char digito: valor) {
            if (digito - '0' == 0 || digito - '0' == 6 || digito - '0' == 9) {
                qtde += 6;
            } else if (digito - '0' == 2 || digito - '0' == 3 || digito - '0' == 5) {
                qtde += 5;
            } else if (digito - '0' == 1) {
                qtde += 2;
            } else if (digito - '0' == 4) {
                qtde += 4;
            } else if (digito - '0' == 7) {
                qtde += 3;
            } else if (digito - '0' == 8) {
                qtde += 7;
            }
        }

        cout << qtde << " leds\n";
        qtde = 0;
    }

    return 0;
}