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

//Nome: Somando Inteiros Consecutivos
//Assunto: Repetição
//Competição/criador: Neilor Tonin, URI Brasil
//Nível: 1
//https://judge.beecrowd.com/pt/problems/view/1149

int main() { _

    int a, n=-1, soma=0;

    cin >> a;

    while(n<=0) {
        cin >> n;
    }

    for (int i = 0; i < n; i++) soma+=a+i;

    cout << soma << endl;

    return 0;
}