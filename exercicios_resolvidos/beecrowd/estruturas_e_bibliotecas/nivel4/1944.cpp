/*
BRINDE FACE 2015

A FACE em 2015 está apoiando a terceira edição da Maratona de Programação, mas desta vez a organização solicitou sua ajuda para criar um sistema de sorteio utilizando as letras da palavra FACE. Como a feira utiliza uma proposta diferenciada e alegre, cada participante que entra na feira ganha 4 letras, uma de cada cor e em formato de bloco de madeira, conforme Figura 1, e deve inserí-las num painel. Se, no momento da inserção, as 4 letras formarem o contrário das 4 últimas letras, o visitante ganhará um brinde.

Por exemplo: suponha que já tiveram 3 participantes que entraram na feira e o painél ficou da seguinte forma: F A C E E C F A A C F E A C E F. Note que sempre que o painél fica vazio, assim como no início do evento, as letras F A C E são inseridas pela organização do evento. Agora, na entrada do quarto participante, ele inseriu as letras F E C A e, com isso, receberá um brinde por fechar o contrário de A C E F. Após essa situação, o painél deve ficar F A C E E C F A A C F E.

Escreva um algoritmo que, dadas as letras recebidas e inseridas pelos participantes, diga quantos participantes ganharam brindes. Lembre-se que sempre que o painel fica vazio as letras F A C E são inseridas pela organização do evento.

Entrada
A primeira linha de cada caso de teste contém um inteiro N (1 ≤ N ≤ 100), representando o número de visitantes que vão receber as letras. Em cada uma das N linhas seguintes deve ser informada a combinação das 4 letras que o visitante deseja inserir no painel, separadas por espaço.

Saída
Para cada grupo de visitantes, deve ser informado quantos destes receberão brindes.

Exemplos de Entrada
4
E C F A
A C E F
F E C A
A F C E


3
E A C F
A F C E
E F C A

6
E C A F
E C A F
E C A F
E C A F
E C A F
E C A F

Exemplos de Saída
2
0
6
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<string> face;
    int qtde;
    int brindes = 0;
    string atualTopo;
    string tentativa;
    string aux;

    face.push("FACE");
    cin >> qtde;

    while(qtde--) {
        atualTopo = face.top();

        for(int i = 0; i < 4; i++) {
            cin >> aux;
            tentativa += aux;
        }

        if(tentativa[3] == atualTopo[0] && tentativa[2] == atualTopo[1] && tentativa[1] == atualTopo[2] &&
           tentativa[0] == atualTopo[3]) {
            brindes++;
            face.pop();

            if(face.empty()) {
                face.push("FACE");
            }

        } else {
            face.push(tentativa);
        }

        tentativa = "";
    }

    cout << brindes << "\n";

    return 0;
}