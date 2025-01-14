#include <bits/stdc++.h>

//Nome: Autorama
//Assunto: Desconhecido
//Competição/criador: OBI 2006
//https://judge.beecrowd.com/pt/problems/view/2316

using namespace std;

const int MAXN = 110;
int posto[MAXN], voltas[MAXN], competidores[MAXN], tempo[MAXN];
//aqui inicializou-se vetores, todos inicialmente nulos

bool compara(int x, int y) {
    if(voltas[x]==voltas[y]) {
        if(posto[x]==posto[y]) {
            if(tempo[x]==tempo[y])
                return x<y;
            return tempo[x]<tempo[y];
        }
        return posto[x]>posto[y];
    }
    return voltas[x]>voltas[y];
}

int main() {

    int k, n, m;

    cin >> k >> n >> m;

    for(int i=0;i<=n;i++) {
        competidores[i]=i;
        //cout << "i: "<< i << endl;
    }
    
    for(int i=1;i<=m;i++){
        int a, b;
        cin>>a>>b;
        if(b-posto[a]==1){
            tempo[a]=i; //o tempo de cada jogador foi condicionado 
            //ao index em que a última entrada em um posto foi registrada
            if(b==k) {
                voltas[a]+=1;
                posto[a]=0;
            }
            else{
                posto[a]++;
            }
        }
    }

    sort(competidores+1, competidores+n+1, compara);
    //sort(começo do vetor, final do vetor, função auxiliar para ordenar os competidores)

    cout<<competidores[1];
    
    for(int i=2; i<=n;i++) {
        cout << " " << competidores[i];
    }

    cout << endl;

    return 0;
}