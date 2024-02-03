/*
A Associação dos Primos Indivisíveis elegeu uma categoria de números primos chamados de Super Primos. Um número é
considerado super primo se além de ser primo, todos os seus dígitos são primos, também. A Associação lhe solicitou que
fizesse um programa para caracterizar os números.

Entrada: a entrada contém vários casos de testes, cada caso de teste é um número inteiro N (0 < N < 105) em uma linha
única. A entrada termina no último caso de teste.

Saída: para cada caso de teste espera-se, em um linha única, a classificação do número da entrada, que pode ser: "Super",
se o número for Super Primo; "Primo" se o número por um número primo apenas; ou "Nada" se o número possuir divisores
além do 1 e ele mesmo.

Exemplo de Entrada
23
33
43

Exemplo de Saída
Super
Nada
Primo
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
    string numero;
    bool superPrimo = true;

    while(cin >> numero) {
        if(!is_prime(stoi(numero))) {
            cout << "Nada\n";
            continue;
        }

        for(char digito: numero) {
            if(!is_prime(digito - '0')) {
                superPrimo = false;
                continue;
            }
        }

        if(superPrimo) cout << "Super\n";
        else cout << "Primo\n";

        superPrimo = true;
    }

    return 0;
}