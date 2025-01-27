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

//Nome: Resto 2
//Assunto: Repetição
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1075

using namespace std;

int main() { _

    int n;

    cin >> n;

    if (n > 2) {
        int num=2;
        while(num<10000) {
            cout << num << endl;
            num+=n;
        }
    }

    return 0;
}