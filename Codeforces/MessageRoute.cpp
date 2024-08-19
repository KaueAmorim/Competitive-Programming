#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e5+10;
vector<vector<int>> grafo(MAX);
vector<bool> visitado(MAX, false);
vector<int> pai(MAX, -1);

void bfs(int x){
    queue<int> fila;
    fila.push(x);
    visitado[x] = true;
    pai[x] = x;

    while(!fila.empty()){
        int v = fila.front();
        fila.pop();
        for(auto i : grafo[v]){
            if(!visitado[i]){
                fila.push(i);
                visitado[i] = true;
                pai[i] = v;
            }
        }
    }
}

vector<int> caminho(int atual){
    vector<int> retorno;
    if(!visitado[atual]) return retorno;

    retorno.push_back(atual);
    while(pai[atual] != atual){ 
        atual = pai[atual];
        retorno.push_back(atual);
    }

    reverse(retorno.begin(), retorno.end());
    return retorno;
}

int main(){ _
    
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        a--;
        b--;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
    
    bfs(0);
     
    vector<int> resposta = caminho(n-1);

    if(resposta.empty()) cout << "IMPOSSIBLE" << endl;
    else{
        cout << resposta.size() << endl;
        for(auto i : resposta) cout << i + 1 << " ";
        cout << endl;
    }

    return 0;
}
