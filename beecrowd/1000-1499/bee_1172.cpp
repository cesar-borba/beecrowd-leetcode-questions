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

//Nome: Substituição em Vetor I
//Assunto: Vetores
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1172

using namespace std;

int main() { _

    array<int, 10> x;

    for (int& num : x) {
        cin >> num;
    }

    replace_if(x.begin(), x.end(), [](int n){ return n <= 0; }, 1);

    for (int i = 0; i < 10; i++) {
        cout << "X[" << i << "] = " << x[i] << endl;  
    }

    return 0;
}