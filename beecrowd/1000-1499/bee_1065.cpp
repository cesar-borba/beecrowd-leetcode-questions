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

//Nome: Pares entre Cinco Números
//Assunto: Repetição
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1065

int main() { _

    int n=5, cont=0;
    while(n--) {
        int a;
        cin >> a;
        if (a%2==0) cont++;
    }

    cout << cont << " valores pares\n";

    return 0;
}