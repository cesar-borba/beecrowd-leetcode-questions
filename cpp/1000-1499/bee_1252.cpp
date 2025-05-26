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

int m;

bool compare(int a, int b)
{

    bool imparA = abs(a % 2) == 1;
    bool imparB = abs(b % 2) == 1;
    int restoA = a % m;
    int restoB = b % m;

    if (restoA < restoB)
        return true;
    else if (restoA > restoB)
        return false;
    else
    {
        if (imparA && !imparB)
            return true;
        else if (!imparA && imparB)
            return false;
        else if (imparA && imparB)
        {
            if (a == max(a, b))
                return true;
            else
                return false;
        }
        else
        { // ambos pares
            if (a == min(a, b))
                return true;
            else
                return false;
        }
    }
}

int main()
{
    _

        // comp (<)
        // empate (impar e par) %n (mesmo valor) -> impar precede par
        // empate (impar e impar) %n (mesmo valor) -> maior impar
        // empate (par e par) %n (mesmo valor) -> menor número par
        // mod de num negativo nunca poderá ser >0

        int n;
    vector<vector<int>> vec2;
    vector<pair<int, int>> vecNM;
    // dbg(-3%3);
    // dbg(-10%3);

    while (cin >> n >> m, n != 0 && m != 0)
    {
        vecNM.pb(mp(n, m));
        vector<int> vec;
        while (n--)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        sort(vec.begin(), vec.end(), compare);

        vec2.pb(vec);
    }

    for (int j = 0; j < vecNM.size(); j++)
    {
        cout << vecNM[j].f << " " << vecNM[j].s << endl;
        for (int i=0; i < vec2[j].size(); i++)
        {
            cout << vec2[j][i] << endl;
        }
    }

    cout << "0 0" << endl;

    return 0;
}