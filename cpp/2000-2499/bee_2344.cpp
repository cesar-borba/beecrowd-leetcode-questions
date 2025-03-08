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

//Nome: Notas da Prova
//Assunto: Seleção
//Competição/criador: OBI 2009
//https://judge.beecrowd.com/pt/problems/view/2344

using namespace std;

int main() { _

    int nota;

    cin >> nota;

    if (nota==0)
        cout << "E";
    else if (nota>0 && nota<36)
        cout << "D";
    else if (nota>35 && nota<61)
        cout << "C";
    else if (nota>60 && nota<86)
        cout << "B";
    else
        cout << "A";

    cout << endl;

    return 0;
}