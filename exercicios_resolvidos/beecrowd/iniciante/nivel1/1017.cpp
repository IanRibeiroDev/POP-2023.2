/*
Gasto de Combustível

Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L.
Para isso, ele gostaria que você o auxiliasse através de um simples programa.
Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h).
Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários.
Mostre o valor com 3 casas decimais após o ponto.

Entrada: o arquivo de entrada contém dois inteiros. O primeiro é o tempo gasto na viagem (em horas) e o segundo é a velocidade média durante a mesma (em km/h).

Saída: imprima a quantidade de litros necessária para realizar a viagem, com três dígitos após o ponto decimal.

Exemplo de Entrada:
10
85

2
92

22
67

Exemplo de Saída:
70.833

15.333

122.833
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    double tempo, velocidade;
    cin >> tempo >> velocidade;
    cout << fixed << setprecision(3) << (tempo * velocidade) / 12 << "\n";
    return 0;
}