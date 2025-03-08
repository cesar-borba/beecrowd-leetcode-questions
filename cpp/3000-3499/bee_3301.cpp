#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

//Nome: Sobrinho do Meio
//Assunto: Desconhecido
//Competição/criador: Ricardo Martins, Instituto Federal do Sul de Minas Gerais BR Brazil
//https://judge.beecrowd.com/pt/problems/view/3301

using namespace std;

int main() { _

    int h, z, l;

    while(cin >> h >> z >> l) {
        if ((h > z && h < l) || (h < z && h > l))
            cout << "huguinho" << endl;
        else if ((z < h && z > l) || (z > h && z < l))
            cout << "zezinho" << endl;
        else if ((l < h && l > z) || (l > h && l < z))
            cout << "luisinho" << endl;
    }

    return 0;
}