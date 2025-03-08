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

//Nome: Tempo de Jogo com Minutos
//Assunto: Seleção
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1047

using namespace std;

int main() { _

    int h1, m1, h2, m2, init, finl;

    cin >> h1 >> m1 >> h2 >> m2;

    init = h1*60 + m1;
    finl = h2*60 + m2;
    
    int diff;

    if (init > finl) {
        diff = (60*24 - init) + finl;
    }
    else diff = finl-init;

    if (diff == 0) cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    else {
        int hora=diff/60;
        int minuto=diff%60;
        cout << "O JOGO DUROU " << hora << " HORA(S) E " << minuto << " MINUTO(S)" << endl;
    }

    return 0;
}