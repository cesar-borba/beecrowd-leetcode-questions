#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
//#define f first
#define s second
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

//Nome: Refrigerante
//Assunto: Desconhecido
//Competição/criador: Andreas Björklund FI Finland
//https://judge.beecrowd.com/pt/problems/view/3214

using namespace std;

int main() { _

    int e, f, c, ttl=0, r, aux;

    cin >> e >> f >> c;

    r=e+f;

    while(r>=c) {
        aux=r/c;
        ttl+=aux;
        r%=c;
        r+=aux;
    }

    cout << ttl << endl;

    return 0;
}