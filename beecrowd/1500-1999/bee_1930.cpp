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

//Nome: Tomadas
//Assunto: Desconhecido
//Competição/criador: OBI 2013 / Cláudio L. Lucchesi, Fábio D. Moreira BR Brazil
//https://judge.beecrowd.com/pt/problems/view/1930

using namespace std;

int main() { _

    int t, tomadas=0, n=4;

    while(n--) {
        cin >> t;
        if(n>0) t--;
        tomadas+=t;
    }

    cout << tomadas << endl;

    return 0;
}