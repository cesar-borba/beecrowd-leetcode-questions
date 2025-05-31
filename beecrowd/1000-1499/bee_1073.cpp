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

//Nome: Quadrado de Pares
//Assunto: Repetição
//Competição/criador: Neilor Tonin, URI Brasil
//Nível: 1
//https://judge.beecrowd.com/pt/problems/view/1073

int main() { _

    ll n;
    cin >> n;

    for (ll i = 2; i <= n; i++) if(i%2==0) cout << fixed << setprecision(0) << i << "^2 = " << pow(i, 2) << endl;

    return 0;
}