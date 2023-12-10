/*
Tradutor do Papai Noel

Nicolau já está bastante cansado e sua memória não é mais a mesma. Você, como navegador, deverá auxiliar o Papai Noel a
gritar a frase "Feliz Natal" no idioma correto de cada país de que trenó está sobrevoando.

Como você é um elfo muito esperto, você já criou um pequeno app no seu celular (sim, elfos tem celular) que irá lhe
informar a frase no idioma correto dado o nome do país. Como o trenó é moderno (foi atualizado no ano 2000) ele exibe
no painel de navegação o nome do país atual.

Os dados inseridos no seu app foram:

brasil              Feliz Natal!
alemanha            Frohliche Weihnachten!
austria             Frohe Weihnacht!
coreia              Chuk Sung Tan!
espanha             Feliz Navidad!
grecia              Kala Christougena!
estados-unidos      Merry Christmas!
inglaterra          Merry Christmas!
australia           Merry Christmas!
portugal            Feliz Natal!
suecia              God Jul!
turquia             Mutlu Noeller
argentina           Feliz Navidad!
chile               Feliz Navidad!
mexico              Feliz Navidad!
antardida           Merry Christmas!
canada              Merry Christmas!
irlanda             Nollaig Shona Dhuit!
belgica             Zalig Kerstfeest!
italia              Buon Natale!
libia               Buon Natale!
siria               Milad Mubarak!
marrocos            Milad Mubarak!
japao               Merii Kurisumasu!

Para não correr o risco de infomar o nome errado você decidiu testar o aplicativo mais algumas vezes.

Entrada: você irá testar o seu aplicativo com diversos nomes de paises, simulando os dados informados pelo
painel de navegação do trenó.

Saída: o seu aplicativo deverá mostrar na tela a frase no idioma correto. Caso ela não esteja cadastrada, você deverá
exibir a mensagem "--- NOT FOUND ---" para que depois dos testes você possa completar o banco de dados.

Exemplo de Entrada
uri-online-judge
alemanha
brasil
austria

Exemplo de Saída
--- NOT FOUND ---
Frohliche Weihnachten!
Feliz Natal!
Frohe Weihnacht!
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    map<string, string> felizNatal;
    string teste;

    felizNatal["brasil"] = "Feliz Natal!";
    felizNatal["alemanha"] = "Frohliche Weihnachten!";
    felizNatal["austria"] = "Frohe Weihnacht!";
    felizNatal["coreia"] = "Chuk Sung Tan!";
    felizNatal["espanha"] = "Feliz Navidad!";
    felizNatal["grecia"] = "Kala Christougena!";
    felizNatal["estados-unidos"] = "Merry Christmas!";
    felizNatal["inglaterra"] = "Merry Christmas!";
    felizNatal["australia"] = "Merry Christmas!";
    felizNatal["portugal"] = "Feliz Natal!";
    felizNatal["suecia"] = "God Jul!";
    felizNatal["turquia"] = "Mutlu Noeller";
    felizNatal["argentina"] = "Feliz Navidad!";
    felizNatal["chile"] = "Feliz Navidad!";
    felizNatal["mexico"] = "Feliz Navidad!";
    felizNatal["antardida"] = "Merry Christmas!";
    felizNatal["canada"] = "Merry Christmas!";
    felizNatal["irlanda"] = "Nollaig Shona Dhuit!";
    felizNatal["belgica"] = "Zalig Kerstfeest!";
    felizNatal["italia"] = "Buon Natale!";
    felizNatal["libia"] = "Buon Natale!";
    felizNatal["siria"] = "Milad Mubarak!";
    felizNatal["marrocos"] = "Milad Mubarak!";
    felizNatal["japao"] = "Merii Kurisumasu!";

    while(cin >> teste) {
        if(felizNatal.find(teste) != felizNatal.end()) {
            cout << felizNatal[teste] << "\n";
        } else {
            cout << "--- NOT FOUND ---\n";
        }
    }

    return 0;
}