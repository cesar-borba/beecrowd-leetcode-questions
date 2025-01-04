#include <bits/stdc++.h>

//https://judge.beecrowd.com/pt/problems/view/2449

using namespace std;

int main() {
    
    int n, m;

    cin >> n >> m;

   vector<int>vetor;

    for (int i = 0; i< n; i++) {
        int a;
        cin >> a;
        vetor.push_back(a);
    }
    
    int movimentos = 0;

    for (int i=0; i<vetor.size(); i++) {
        int diferenca;
        if (vetor[i]!=m) {
            diferenca = m -vetor[i];
            vetor[i]+=diferenca;
            vetor[i+1]+=diferenca;
            movimentos+=abs(diferenca);
        }
    }

    cout << movimentos << endl;
}