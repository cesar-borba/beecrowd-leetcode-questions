#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, magico=0;

    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n));
    set<int> contador;
    
    /*preenchimento da matriz*/

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> matriz[i][j];
            if(j==i) {
                magico += matriz[i][j];
            }

            /*adiciona um vaor único para a matriz, se ele não for único (por não seguir uma regra do set, 
            de valores únicos), ele não é incluso. Assim, ao validar no próxima condicional se o número (size)
            de valores contidos no vetor batem com o número que deveria estar contido, ele poderá ser barrado
            e o retorno será 0*/

            contador.insert(matriz[i][j]);
        }
        if (contador.size()!=(i+1)*n) {
            cout << "0" << endl;
            return 0;
        }
    }

        /*conferência da SOMA PERFEITA (mágico)*/

        for(int i=0;i<n;i++) {
            int somal=0, somac=0;
            for(int j=0;j<n;j++) {
                somal+=matriz[i][j];
                somac+=matriz[j][i];
            }
            if (somal != magico || somac != magico) {
            cout << "0" << endl;
            return 0;
            }
        }

        cout << magico << endl;

    return 0;
}