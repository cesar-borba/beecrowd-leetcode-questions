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

//Nome: Leitura Ótica
//Assunto: Ad hoc
//Competição/criador: Maratona de Programação da SBC 2010
//Nível: 1
//https://judge.beecrowd.com/pt/problems/view/1129

int main() { _

    vector<char> letras = {'A', 'B', 'C', 'D', 'E'};
    int n;

    while(cin >> n, n!=0) {
        while(n--) {
            // dbg(n);
            char letr='*';
            bool preencheu=false;
            for (int i = 0; i < 5; i++)
            {
                int a;
                cin >> a;
                // dbg(a);
                if(!preencheu && a<=127) {
                    letr=letras[i];
                    preencheu=true;
                } else if (preencheu && a<=127) letr='*';
                // dbg(i);
                // dbg(letr);
            }
                cout << letr << endl;
        }
    }

    return 0;
}