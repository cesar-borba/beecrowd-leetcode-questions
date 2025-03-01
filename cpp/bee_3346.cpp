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

//Nome: Flutuação do PIB
//Assunto: Ad-Hoc
//Competição/criador: Leandro Zatesko, Federal University of Technology of Paraná BR Brazil
//https://judge.beecrowd.com/pt/problems/view/3346

using namespace std;

int main() { _

    double a1, a2, aux;

    cin >> a1 >> a2;

    aux=(1*(1+a1/100))*(1+a2/100);

    cout << fixed << setprecision(6) << (aux-1)*100 << endl;

    return 0;
}