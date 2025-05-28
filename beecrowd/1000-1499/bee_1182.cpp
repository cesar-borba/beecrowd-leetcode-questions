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

typedef vector<vector<double>> vvd;

int a;
double sum=0;

void soma(vvd &mat, int a) {
    
    for (int i = 0; i < 12; i++)
    {
        sum+=mat[i][a];
    }
}

int main() { _

    vvd mat(12);
    char c;
    cin >> a >> c;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            double b;
            cin >> b;
            mat[i].pb(b);
        }
    }
    
    soma(mat, a);
    if(c=='S') cout << fixed << setprecision(1) << sum << endl;
    else cout << fixed << setprecision(1) << (sum/12) << endl;

    return 0;
}