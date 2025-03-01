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

//Nome: Aumento de Salário
//Assunto: Seleção
//Competição/criador: Neilor Tonin, URI BR Brasil
//https://judge.beecrowd.com/pt/problems/view/1048

using namespace std;

int main() { _

    float sal, r, new_sal;

    cin >> sal;

    if (sal > 0 && sal <= 400)
        r=0.15;
    else if (sal > 400 && sal <= 800)
        r=0.12;
    else if (sal > 800 && sal <= 1200)
        r=0.1;
    else if (sal > 1200 && sal <= 2000)
        r=0.07;
    else if (sal > 2000)
        r=0.04;

    new_sal=sal*(1+r);
    cout << fixed << setprecision(2) << "Novo salario: " << new_sal << endl;
    cout << fixed << setprecision(2) << "Reajuste ganho: " << (new_sal-sal) << endl;
    cout << fixed << setprecision(0) << "Em percentual: " << (r*100) << " %" << endl;

    return 0;
}