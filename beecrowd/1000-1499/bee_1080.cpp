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

//Nome: Maior e Posição
//Assunto: Repetição
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1080

using namespace std;

int main() { _

    pair<int, int> p;
    p = make_pair(0, 0);
    
    for (int i = 0; i < 100; i++)
    {
        int a;
        cin >> a;

        if(p.f<a) {
            p.f= a;
            p.s = i+1;
        }
    }

    cout << p.f << endl << p.s << endl;

    return 0;
}