/*
Ida à Feira

Dona Parcinova costuma ir regularmente à feira para comprar frutas e legumes.
Ela pediu então à sua filha, Mangojata, que a ajudasse com as contas e que fizesse um programa que calculasse o valor que precisa levar para
poder comprar tudo que está em sua lista de compras, considerando a quantidade de cada tipo de fruta ou legume e os preços destes itens.

Entrada: a primeira linha de entrada contém um inteiro N que indica a quantidade de idas à feira de dona Parcinova (que nada mais é do que o número de casos de teste que vem a seguir).
Cada caso de teste inicia com um inteiro M que indica a quantidade de produtos que estão disponíveis para venda na feira.
Seguem os M produtos com seus preços respectivos por unidade ou Kg.
A próxima linha de entrada contém um inteiro P (1 ≤ P ≤ M) que indica a quantidade de diferentes produtos que dona Parcinova deseja comprar.
Seguem P linhas contendo cada uma delas um texto (com até 50 caracteres) e um valor inteiro, que indicam respectivamente o nome de cada produto e a quantidade deste produto.

Saída: para cada caso de teste, imprima o valor que será gasto por dona Parcinova no seguinte formato: R$ seguido de um espaço e seguido do valor,
com 2 casas decimais, conforme o exemplo abaixo.

Exemplo de Entrada:
2
4
mamao 2.19
cebola 3.10
tomate 2.80
uva 2.73
3
mamao 2
tomate 1
uva 3
5
morango 6.70
repolho 1.12
brocolis 1.71
tomate 2.80
cebola 2.81
4
brocolis 2
tomate 1
cebola 1
morango 1

Exemplo de Saída:
R$ 15.37
R$ 15.73
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    struct Produto {
        string nome;
        double valor;
    } aux;

    int qtdeProdutosDisponiveis;
    int qtdeProdutosComprados;
    vector<Produto> produtosDisponiveis;
    vector<Produto> produtosComprados;
    double valorGasto = 0;
    int idas;
    cin >> idas;

    for(int i = 0; i < idas; i++) {
        cin >> qtdeProdutosDisponiveis;
        for(int j = 0; j < qtdeProdutosDisponiveis; j++) {
            cin >> aux.nome >> aux.valor;
            produtosDisponiveis.push_back(aux);
        }

        cin >> qtdeProdutosComprados;
        for(int j = 0; j < qtdeProdutosComprados; j++) {
            cin >> aux.nome >> aux.valor;
            produtosComprados.push_back(aux);
        }

        for(Produto comp: produtosComprados) {
            for(Produto disp: produtosDisponiveis) {
                if(disp.nome == comp.nome) {
                    valorGasto += disp.valor * comp.valor;
                    break;
                }
            }
        }

        cout << "R$ " << fixed << setprecision(2) << valorGasto << "\n";

        valorGasto = 0;
        produtosDisponiveis.clear();
        produtosComprados.clear();
    }
    return 0;
}