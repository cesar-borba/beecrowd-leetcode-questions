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

//Nome: Lanche
//Assunto: Seleção
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1038

using namespace std;

int main() { _

    float prices[] = {4, 4.5, 5, 2, 1.5};

    int cod;
    float quant;

    cin >> cod >> quant;

    cout << "Total: R$ " << fixed << setprecision(2) << (prices[cod-1]*quant) << endl;

    return 0;
}