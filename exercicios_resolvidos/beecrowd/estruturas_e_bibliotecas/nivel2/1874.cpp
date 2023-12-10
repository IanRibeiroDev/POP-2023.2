/*
Empurrando Blocos

A Empresa Blocos Regulares Inventando Serventia de Algo, mais conhecida como BRISA, construi blocos, sempre do mesmo tamanho.
Um detalhe que chama a atenção está na forma em que os blocos são armazenados em estoque, depois de fabricados.
Os mesmos são formados por uma fileira de pilhas. A retirada de uma caixa do estoque é um tanto quando desordenado, pois se
escolhe uma pilha aleatoriamente e retira-se algum bloco do topo dela. Porém, a forma de armazenamento é um tanto quanto
interessante: uma esteira, localizada na reta do topo da pilha mais à direita do estoque, é utilizada.
Com isto, forma-se uma fila com os novos blocos. A esteira roda da direita para a esquerda. Assim que houver um espaço vago
em uma das pilhas seguintes, o bloco será inserido na mesma, caso não haja, ele vai avançando até as pilhas seguintes.

Entrada: haverá diversos casos de teste. Cada caso de teste terá 3 números inteiros, H, P e F, indicando a altura da pilha
mais a direita , a quantidade de pilhas de blocos e o tamanho da fila de blocos a ser inserida. Após isto, serão lidos H
linhas com P valores, com valores 1, representando onde tem bloco, e 0, representando onde não tem bloco. A seguir, será
lida uma linha com F valores, representando a fila com os blocos novos. O último caso de teste é representado por três zeros,
e não deverá ser processado.

Saída: para cada caso de teste, imprima as pilhas após a inserção dos novos blocos. Em alguns casos, a fila de novos blocos
será mais que suficiente para que todas as pilhas fiquem do mesmo tamanho. Neste caso, desconsidere os blocos que sobrarem
na fila.

Exemplo de Entrada
4 5 4
1 0 0 0 1
1 0 1 0 1
1 1 1 1 1
1 1 1 1 1
2 3 4 5

5 3 6
1 0 1
1 0 1
1 0 1
1 0 1
1 0 1
4 5 6 7 8 9

0 0 0

Exemplo de Saída
1 0 4 3 1
1 5 1 2 1
1 1 1 1 1
1 1 1 1 1

1 8 1
1 7 1
1 6 1
1 5 1
1 4 1
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int altura;
    int qtdePilhas;
    int tamanhoFila;
    stack<int> pilha;
    vector<stack<int>> pilhas;
    queue<int> fila;
    int bloco;

    cin >> altura >> qtdePilhas >> tamanhoFila;
    while(altura != 0 && qtdePilhas != 0 && tamanhoFila != 0) {
        for (int i = 0; i < qtdePilhas; i++) {
            pilhas.push_back(pilha);
        }

        for (int i = 0; i < altura; i++) {
            for (int j = 0; j < qtdePilhas; j++) {
                cin >> bloco;
                if(bloco == 1) {
                    pilhas[j].push(bloco);
                }
            }
        }

        for (int i = 0; i < tamanhoFila; i++) {
            cin >> bloco;
            fila.push(bloco);
        }

        for (int i = qtdePilhas - 1; i >= 0; i--) {
            while(pilhas[i].size() != altura && !fila.empty()) {
                pilhas[i].push(fila.front());
                fila.pop();
            }
        }

        for (int i = qtdePilhas - 1; i >= 0; i--) {
            while(pilhas[i].size() != altura) {
                pilhas[i].push(0);
            }
        }

        for (int i = 0; i < altura; i++) {
            for (int j = 0; j < qtdePilhas; j++) {
                if(j == qtdePilhas - 1) {
                    cout << pilhas[j].top() << "\n";
                    pilhas[j].pop();
                } else {
                    cout << pilhas[j].top() << " ";
                    pilhas[j].pop();
                }
            }
        }
        pilhas.clear();
        while(!fila.empty()) {
            fila.pop();
        }
        cin >> altura >> qtdePilhas >> tamanhoFila;
    }
    return 0;
}