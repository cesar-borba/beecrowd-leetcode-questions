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

//Nome: Keanu
//Assunto: Math
//Competição/criador: Eliton Machado, UDESC BR Brazil
//https://judge.beecrowd.com/pt/problems/view/3342

using namespace std;

int main() { _

    int n, b, p;

    cin >> n;
    n=pow(n,2);

    if(n%2==1) b=(n+1)/2;
    else b=n/2;

    p=n-b;

    cout << b <<" casas brancas e " << p << " casas pretas" << endl;

    return 0;
}