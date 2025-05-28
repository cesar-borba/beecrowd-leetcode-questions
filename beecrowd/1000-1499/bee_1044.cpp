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

int main() { _

    int a, b;
    cin >> a >> b;
    bool multiplos=true;
    int resto;
    if(a>=b) resto = a%b;
    else resto = b%a;
    // dbg(resto);
    if(resto != 0) multiplos=false;

    if(multiplos) cout << "Sao Multiplos\n";
    else cout << "Nao sao Multiplos\n";

    return 0;
}