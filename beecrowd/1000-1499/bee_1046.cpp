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

//Nome: Tempo de Jogo
//Assunto: Seleção
//Competição/criador: Neilor Tonin, URI Brasil
//Nível: 2
//https://judge.beecrowd.com/pt/problems/view/1046

int main() { _

    int a,b, hora;

    cin >> a >> b;
    if(a==b) hora=24;
    else if(a<b) hora=b-a;
    else hora=(24-a)+b;

    cout << "O JOGO DUROU " << hora << " HORA(S)" << endl;

    return 0;
}