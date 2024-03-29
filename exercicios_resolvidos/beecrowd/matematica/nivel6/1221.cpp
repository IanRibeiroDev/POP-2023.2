/*
Mariazinha sabe que um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo.
Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7 sem que haja resto.
Então ela pediu para você fazer um programa que aceite diversos valores e diga se cada um destes valores é primo ou não.
Acontece que a paciência não é uma das virtudes de Mariazinha, portanto ela quer que a execução de todos os casos de
teste que ela selecionar (instâncias) aconteçam no tempo máximo de um segundo, pois ela odeia esperar.

Entrada: a primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 200), correspondente ao número de casos de teste.
Seguem N linhas, cada uma contendo um valor inteiro X (1 < X < 231) que pode ser ou não, um número primo.

Saída: para cada caso de teste imprima a mensagem “Prime” (Primo) ou “Not Prime” (Não Primo), de acordo com o exemplo abaixo.

Exemplo de Entrada:
3
123321
123
103

Exemplo de Saída:
Not Prime
Not Prime
Prime
*/

#include <bits/stdc++.h>

using namespace std;

bool is_prime( int x ) {
    if( x == 1 ) return false;
    if( x == 2 ) return true;
    if( x%2 == 0 ) return false;
    for( int i=3; i*i <= x; i+=2 )
        if( x%i == 0 ) return false;
    return true;
}

int main() {
    int n, x;
    cin >> n;

    while(n--) {
        cin >> x;

        if(is_prime(x)) cout << "Prime\n";
        else cout << "Not Prime\n";
    }

    return 0;
}