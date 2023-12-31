/*
Salário com Bônus

Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro).
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.

Entrada: o arquivo de entrada contém um texto (primeiro nome do vendedor) e 2 valores de dupla precisão (double) com duas casas decimais,
representando o salário fixo do vendedor e montante total das vendas efetuadas por este vendedor, respectivamente.

Saída: imprima o total que o funcionário deverá receber, conforme exemplo fornecido.

Exemplos de Entrada:
JOAO
500.00
1230.30

PEDRO
700.00
0.00

MANGOJATA
1700.00
1230.50

Exemplos de Saída:

TOTAL = R$ 684.54
TOTAL = R$ 700.00
TOTAL = R$ 1884.58
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string nome;
    double salario, montante;

    cin >> nome;
    cin >> salario;
    cin >> montante;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << salario + (montante * 15) / 100 << '\n';
    return 0;
}