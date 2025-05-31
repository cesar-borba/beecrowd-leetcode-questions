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

//Nome: Bits Trocados
//Assunto: Desconhecido
//Competição/criador: OBI 2000
//https://judge.beecrowd.com/pt/problems/view/2187

using namespace std;

int main() { _

    int n, cont =1;

    cin >> n;

    while(n!=0) {
        int alt;
        cout << "Teste " << cont << endl;
        cout << n/50;
        n%=50;
        cout << " " << n/10;
        n%=10;
        cout << " " << n/5;
        n%=5;
        cout << " " << n/1 << endl << endl;
        cont++;
        cin >> n;
    }

    return 0;
}