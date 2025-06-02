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

//Nome: Ultrapassando Z
//Assunto: Repetição
//Competição/criador: Neilor Tonin, URI Brasil
//Nível: 1
//https://judge.beecrowd.com/pt/problems/view/1150

int main() { _

    int x, cont=0, soma=0;

    cin >> x;

    int y=x;

    while(y<=x) {
        cin >> y;
    }

    while(soma<=y) {
        soma+=x+cont;
        cont++;
    }

    cout << cont << endl;

    return 0;
}