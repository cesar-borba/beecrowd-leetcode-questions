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

//Nome: DDD
//Assunto: Seleção
//Competição/criador: 
//Nível: 2
//https://judge.beecrowd.com/pt/problems/view/1050

int main() { _

    int n;
    map<int, string> hash;

    hash[61] = "Brasilia";
    hash[71] = "Salvador";
    hash[11] = "Sao Paulo";
    hash[21] = "Rio de Janeiro";
    hash[32] = "Juiz de Fora";
    hash[19] = "Campinas";
    hash[27] = "Vitoria";
    hash[31] = "Belo Horizonte";

    cin >> n;

    auto it = hash.find(n);

    if (it != hash.end()) cout << hash[n] << endl;
    else cout << "DDD nao cadastrado" << endl;

    return 0;
}