/*
Primeiro Dicionário de Andy

Andy de apenas 8 anos tem um sonho - ele deseja criar o seu próprio dicionário.
Isto não é uma tarefa fácil para ele, pois conhece poucas palavras.
Bem, ao invés de pensar nas palavras que sabe, ele teve uma idéia brilhante.
A partir do seu livro de histórias favorito, ele vai criar um dicionário com todas as palavras distintas que existem nele.
Ordenando estas palavras em ordem alfabética, o trabalho estará feito.
É claro, isso é uma tarefa que toma um certo tempo e portanto, a ajuda de um programador de computador como você é muito bemvinda.

Você foi convidado a escrever um programa que liste todas as diferentes palavras que existem em um texto.
Neste caso, uma palavra é definida como uma sequência de letras, maiúsculas ou minúsculas.
Palavras com apenas uma letra também deverão ser consideradas. Portanto, seu programa deverá ser "CaSe InSeNsItIvE".
Por exemplo, palavras como "Apple", "apple" ou "APPLE" deverão ser consideradas como a mesma palavra.

Entrada: a entrada contém no máximo 10000 linhas de texto, cada uma delas com no máximo 200 caracteres.
O fim de entrada é determinado pelo EOF.

Saída: você deve imprimir uma lista de diferentes palavras que aparecem no texto, uma palavra por linha.
Todas as palavras devem ser impressas com letras minúsculas, em ordem alfabética. Deverá haver no máximo 5000 palavras distintas.

Exemplo de Entrada
Ex(*$a#.mpl.e:

Adventures in Disneyland

Two blondes were going to Disneyland when they came to a fork in the road. The sign read: "Disneyland LEFT."

So they went home.

Exemplo de Saída
a
adventures
blondes
came
disneyland
e
ex
fork
going
home
in
left
mpl
read
road
sign
so
the
they
to
two
went
were
when
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    set<string> dicionario;
    string palavra;
    string palavraFiltrada;
    int contador = 0;

    while(cin >> palavra) {
        transform(palavra.begin(), palavra.end(), palavra.begin(), ::tolower);

        for(char c: palavra) {
            if(isalpha(c)) {
                palavraFiltrada += c;
            } else if(!palavraFiltrada.empty()) {
                dicionario.insert(palavraFiltrada);
                palavraFiltrada = "";
            }
        }

        if(!palavraFiltrada.empty()) {
            dicionario.insert(palavraFiltrada);
        }

        palavraFiltrada = "";
    }

    for(string s: dicionario) {
        if(contador == 5000) {
            break;
        }
        cout << s << "\n";
        contador++;
    }

    return 0;
}