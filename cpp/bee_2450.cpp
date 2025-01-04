#include <bits/stdc++.h>

//https://judge.beecrowd.com/pt/problems/view/2450

using namespace std;

int main() {
    
    int n, m;

    cin >> n >> m;

    vector<vector<int>> matriz(n, vector<int>(m));

    bool linha_zero = false;
    int zeros_consecutivos=-1;

    for(int i=0; i<n; i++) {
        int consecutivos_linha=0;
        for(int j=0;j<m;j++) {
            cin >> matriz[i][j];
            if (consecutivos_linha==j) {
                consecutivos_linha += (matriz[i][j]==0) ? 1 : 0;
            }
            /*else {
                cout << "linha i: " << i << " | zeros consecutivos LINHA: " << consecutivos_linha << endl;
            }*/
        }
        //cout << "zeros consecutivos LINHA: " << consecutivos_linha << endl;
        if (consecutivos_linha ==m) {
            linha_zero=true;
            zeros_consecutivos=consecutivos_linha;    
        }
        //cout << "linha_zero: " << linha_zero << endl;
        if (linha_zero == false) {
            if (consecutivos_linha > zeros_consecutivos) {
            zeros_consecutivos = consecutivos_linha;
            }
            else {
            cout << "N" << endl;
            return 0;
            }
        }

        else {
            if (consecutivos_linha != m){
            cout << "N" << endl;
            return 0;
        }
        }
        
        //cout << "MAIOR zeros_consecutivos: " << zeros_consecutivos << endl << endl;

    }

    cout << "S" << endl;

    return 0;
}