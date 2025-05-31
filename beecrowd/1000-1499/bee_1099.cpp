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

//Nome: Soma de Ímpares Consecutivos II
//Assunto: Repetição
//Competição/criador: Neilor Tonin, URI Brasil
//Nível: 1
//https://judge.beecrowd.com/pt/problems/view/1099

int main() { _

    int n;
    cin >> n;
    while(n--) {
        int a, b, soma=0;
        cin >> a >> b;
        if (a==b) {
            cout << 0 << endl;
            continue;
        }
        else if(a>b) swap(a, b);

        for(int i=a+1; i<b; i++) {
            if(i%2==1) soma+=i;
        }
        cout << soma << endl;
    }

    return 0;
}