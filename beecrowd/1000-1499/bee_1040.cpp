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

//Nome: Média 3
//Assunto: Seleção
//Competição/criador: Neilor Tonin, URI Brasil
//https://judge.beecrowd.com/pt/problems/view/1040

using namespace std;

int main() { _

    float n1, n2, n3, n4;

    cin >> n1 >> n2 >> n3 >> n4;

    float nota = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

    cout << fixed << setprecision(1) << "Media: " << nota << endl;

    if (nota >= 7) cout << "Aluno aprovado." << endl;
    else if (nota < 5) cout << "Aluno reprovado." << endl;
    else {
        float nota2;
        cout << "Aluno em exame." << endl;
        cin >> nota2;
        cout << fixed << setprecision(1) << "Nota do exame: " << nota2 << endl;
        nota2 = (nota+nota2)/2;
        if(nota2 >= 5) cout << "Aluno aprovado." << endl;
        else cout << "Aluno reprovado." << endl;
        cout << fixed << setprecision(1) << "Media final: " << nota2 << endl;
    }

    return 0;
}