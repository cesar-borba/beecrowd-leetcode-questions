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

//Nome: Sequência Secreta
//Assunto: Desconhecido
//Competição/criador: OBI 2019 Júnior
//https://judge.beecrowd.com/pt/problems/view/3048

using namespace std;

int main() { _

    int n, x=-1, cont=0;

    cin >> n;

    vector<int> seq(n);

    for(int &num : seq) {
        cin >> num;
        if(num != x) {
            cont++;
            x=num;
        }
    }

    cout << cont << endl;

    return 0;
}