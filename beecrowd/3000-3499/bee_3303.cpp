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

//Nome: Palavrão
//Assunto: Desconhecido
//Competição/criador: Abner Samuel P. Palmeira, Instituto Federal do Sul de Minas Gerais BR Brazil
//https://judge.beecrowd.com/pt/problems/view/3303

using namespace std;

int main() { _

    string plv;

    cin >> plv;
    cin.ignore();

    cout << (plv.length()>=10 ? "palavrao\n" : "palavrinha\n");

    return 0;
}