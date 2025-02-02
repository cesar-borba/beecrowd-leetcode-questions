#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

//Nome: Validação de Nota
//Assunto: Repetição
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1117

using namespace std;

int main() { _

    float nota, media=0;
    int cont=0;

    while(cont<2) {
        cin >> nota;
        if (nota < 0 || nota > 10) cout << "nota invalida" << endl;
        else {
            cont++;
            media+=nota;
        }
    }

    media /= 2;

    cout << fixed << setprecision(2) << "media = " << media << endl;

    return 0;
}