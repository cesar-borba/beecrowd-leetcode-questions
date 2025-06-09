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

//Nome: Mês
//Assunto: Seleção
//Competição/criador: Neilor Tonin, URI  Brasil
//Nível: 2
//https://judge.beecrowd.com/pt/problems/view/1052

int main() { _

    vector<string> months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int n;

    cin >> n;

    cout << months[n-1] << endl;

    return 0;
}