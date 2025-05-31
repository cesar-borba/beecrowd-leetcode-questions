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

//Nome: Animal
//Assunto: Seleção
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1049

using namespace std;

int main() { _

    vector<string> carac;
    
    string palavra;

    for (int i = 0; i < 3; i++)
    {
        getline(cin, palavra);
        carac.pb(palavra);
    }

    if (carac[0] == "vertebrado") {
        if (carac[1] == "ave") {
            if (carac[2] == "carnivoro") cout << "aguia" << endl;
            else cout << "pomba" << endl;
        }
        else {
            if (carac[2] == "onivoro") cout << "homem" << endl;
            else cout << "vaca" << endl;
        }
    }

    else {
        if (carac[1] == "inseto") {
            if (carac[2] == "hematofago") cout << "pulga" << endl;
            else cout << "lagarta" << endl;
        }
        else {
            if (carac[2] == "hematofago") cout << "sanguessuga" << endl;
            else cout << "minhoca" << endl;
        }
    }

    return 0;
}