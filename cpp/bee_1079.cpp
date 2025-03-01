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

//Nome: Médias Ponderadas
//Assunto: Repetição
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1079

using namespace std;

int main() { _
    
    int n;

    cin >> n;

    vector<vector<float>> nums(n);

    for (int i = 0; i < n; i++)
    {
        float value;
        for (int j = 0; j < 3; j++)
        {
            float x;
            cin >> x;
            nums[i].pb(x);
        }

        value = ((nums[i][0]*2) + (nums[i][1]*3) + (nums[i][2]*5)) / 10;
        cout << fixed << setprecision(1) << value << endl;
    }
    

    return 0;
}