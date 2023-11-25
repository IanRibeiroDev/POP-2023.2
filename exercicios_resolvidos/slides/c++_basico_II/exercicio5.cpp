/*
O fatorial é muito fácil... Até chegar em 5! Depois se torna uma
continha super chata de fazer. Como você é um ótimo programador, você vai
implementar uma função que calcula o fatorial de qualquer número N para que
sempre que te perguntarem você tenha a resposta na ponta da tela... ops, na
ponta da língua!

Obs: Para evitar problemas, considere fat(1) = 1 e 1 < N <= 10.

Exemplo de Entrada:
10

Exemplo de Saída:
3628800
*/

#include<bits/stdc++.h>

using namespace std;

int fat(int n) {
    int fat = 1;

    for(n; n > 1; n--) {
        fat *= n;
    }

    return fat;
}

int main() {
    int n;
    cin >> n;
    cout << fat(n) << "\n";

    return 0;
}