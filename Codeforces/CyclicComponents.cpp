#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = (2*1e5)+10;
int n, m;
vector<vector<int>> grafo(MAX);
vector<bool> visitado(MAX);
stack<int> elementos;

void dfs(int x){
    visitado[x] = true;

    for(auto i : grafo[x]){
        if(!visitado[i]){
            elementos.push(i);
            dfs(i);
        }
    }
}

int main(){ _
    cin >> n >> m;

    while(m--){
        int v, u; cin >> v >> u;
        v--;
        u--;
        grafo[v].push_back(u);
        grafo[u].push_back(v);
    }
    
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(!visitado[i]){
            elementos.push(i);
            dfs(i);

            bool ciclo = true;
            int tamanho = elementos.size();
            if(tamanho < 3){
                ciclo = false;
                while(tamanho--) elementos.pop();
            }
            else{
                while(tamanho--){
                    if(grafo[elementos.top()].size() != 2) ciclo = false;
                    elementos.pop();
                }
            }
            
            if(ciclo) ans++;
        }
    }
    
    cout << ans << endl;

    return 0;
}
