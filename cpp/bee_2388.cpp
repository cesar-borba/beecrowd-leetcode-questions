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

//Nome: Tacógrafo
//Assunto: Ad hoc
//Competição/criador: OBI 2010
//https://judge.beecrowd.com/pt/problems/view/2388

using namespace std;

int main() { _

    int n, total=0;

    cin >> n;

    while(n--) {
        int t, v;
        cin >> t >> v;
        total+=t*v;
    }

    cout << total << endl;

    return 0;
}