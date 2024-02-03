/*
Um grupo de cientistas está fazendo novas experiências para criar uma nave que possibilite a viagem muito mais rápida
até Marte do que é possível atualmente. Esta nave utilizará dois foguetes e um novo combustível recém criado, muito mais
eficiente que os utilizados até hoje. Só que a velocidade que os novos foguetes podem proporcionar à nave está
relacionada diretamente com o peso do combustível armazenado nestes foguetes (em kg) e, por incrível que pareça, uma
relação deste peso com números primos. Por exemplo, se o peso total do combustível dos foguetes for 1010 kg, a
velocidade atingida (em km/h) é a soma dos 10 números primos à partir de 1010 (incluindo ele se for primo): 1013 -> 1019
-> 1021 -> 1031 -> 1033 -> 1039 -> 1049 -> 1051 -> 1061 -> 1063, ou seja, 10380 km/h.

Os cientistas estão muito intrigados com esta relação matemática existente e querem que você construa um programa que
calcule quanto tempo aproximado (em horas e em dias) uma nave levaria para ir da terra até marte com este novo
combustível, dado um determinado peso de foguetes (claro, eles estão tentando criar os maiores foguetes possíveis)
assumindo que a distância da terra até marte no dia do lançamento, será 60 milhões de kms.

Entrada: a entrada contém um único valor inteiro Peso (1000 < Peso ≤ 60000) indicando o peso máximo de combustível
(em kg) que os foguetes podem armazenar.

Saída: A saída esperada consiste em duas linhas. A primeira linha contém a velocidade que pode ser atingida pela nave,
seguida pelo texto "km/h". A segunda linha contém o tempo estimado de viagem até Marte em horas e em dias (truncados),
com mensagem de texto correspondente, conforme o exemplo abaixo.

Exemplo de Entrada
1010

60000

Exemplo de Saída
10380 km/h
5780 h / 240 d

600578 km/h
99 h / 4 d
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
    int peso, horas, dias, qtdePrimos = 10, velocidade = 0;
    cin >> peso;

    while(qtdePrimos) {
        if(is_prime(peso)) {
            velocidade += peso;
            qtdePrimos--;
            peso++;

        } else {
            peso++;
        }
    }

    horas = 60000000/velocidade;
    dias = horas/24;

    cout << velocidade << " km/h\n" << horas << " h / " << dias << " d\n";

    return 0;
}