/*
Idades

Faça um algoritmo para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo.
O último dado, que não entrará nos cálculos, contém o valor de idade negativa.
Calcular e imprimir a idade média deste grupo de indivíduos.

Entrada: a entrada contém um número indeterminado de inteiros.
A entrada será encerrada quando um valor negativo for lido.

Saída: a saída contém um valor correspondente à média de idade dos indivíduos.
A média deve ser impressa com dois dígitos após o ponto decimal.

Exemplo de Entrada:
34
56
44
23
-2

Exemplo de Saída:
39.25
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int idade, soma = 0;
    double qtde = 0;
    cin >> idade;

    while(idade > 0) {
        soma += idade;
        qtde++;
        cin >> idade;
    }

    cout << fixed << setprecision(2) << soma / qtde << "\n";

    return 0;
}