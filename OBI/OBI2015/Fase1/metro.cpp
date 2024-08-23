#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
const int MAX = 20010;
vector<vector<int>> grafo(MAX);
vector<bool> visitado(MAX);

int dfs(int x){
    if(visitado[x]) return 0;
    else visitado[x] = true;
    
    int total = 1;

    for(auto i : grafo[x]){
        if(grafo[i].size() <= 2) total += dfs(i);
    }

    return total;
}

int main(){ _
    int n, m; cin >> n >> m;

    while(m--){
        int p, q; cin >> p >> q;

        grafo[p].push_back(q);
        grafo[q].push_back(p);
    }
    
    int estação_central;
    vector<int> estação_final;

    for(int i = 1; i <= n; i++){
        if(grafo[i].size() >= 5) estação_central = i;
        else if(grafo[i].size() == 1) estação_final.push_back(i);
    }
    
    int resposta = n;

    for(auto i : estação_final) resposta -= dfs(i);

    resposta -= dfs(estação_central);

    cout << resposta << endl;

    return 0;
}
