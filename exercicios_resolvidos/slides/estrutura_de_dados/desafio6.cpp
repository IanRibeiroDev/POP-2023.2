/*
O professor Maurão decidiu misturar basquete e programação para ensinar agilidade
aos seus jogadores. Maurão vai fazer um treino rápido, chamando um jogador e
dizendo uma palavra. Ele quer que o aluno diga quantas vezes cada vogal apareceu.
Você pode ajudar a seleção de basquete com esse treino (eles não sabem
programar...)? Escreva um programa que conta todas as vogais presentes no texto
recebido e armazena a informação em um dicionário. Exiba as vogais em ordem
alfabética e a quantidade de vezes que apareceu na string.

Exemplo de Entrada:
suolteminhacamisa

Exemplo de Saída:
a - 3
e - 1
i - 2
o - 1
u - 1
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string palavra;
    string letra;
    map<string, int> qtdeLetras;
    cin >> palavra;

    for(char c: palavra) {
        letra = string(1, c);
        qtdeLetras[letra]++;
    }

    cout << "a - " << qtdeLetras["a"] << "\n";
    cout << "e - " << qtdeLetras["e"] << "\n";
    cout << "i - " << qtdeLetras["i"] << "\n";
    cout << "o - " << qtdeLetras["o"] << "\n";
    cout << "u - " << qtdeLetras["u"] << "\n";

    return 0;
}