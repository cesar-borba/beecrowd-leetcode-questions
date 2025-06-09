#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define print(x) cout << x << "\n"

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

//Nome: Imposto de Renda
//Assunto: Seleção
//Competição/criador: Neilor Tonin, URI Brasil
//Nível: 2
//https://judge.beecrowd.com/pt/problems/view/1051

int main() { _

    double v, soma=0;

    cin >> v;

    if(v < 2000) cout << "Isento" << endl;
    else {
        if(v>4500) {
            soma+=(v-4500)*0.28;
            v-=(v-4500);
        }
        if(v>3000) {
            soma+=(v-3000)*0.18;
            v-=(v-3000);
        }
        if(v>2000) {
            soma+=(v-2000)*0.08;
        }

        cout << fixed << setprecision(2) << "R$ " << soma << endl;
    }

    return 0;
}