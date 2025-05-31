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

//Nome: Léxico
//Assunto: Ordem lexicográfica
//Competição/criador: Emilio Wuerges, UFFS BR Brazil
//Nível: 3
//https://judge.beecrowd.com/pt/problems/view/2826

int main() { _

    string seq1, seq2;
    cin >> seq1 >> seq2;
    vector<string> vec = {seq1, seq2};
    sort(vec.begin(), vec.end());
    for (string seq : vec) cout << seq << endl;
    return 0;
}