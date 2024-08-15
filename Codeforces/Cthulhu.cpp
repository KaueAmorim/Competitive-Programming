#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e2+10;
vector<vector<int>> grafo(MAX);
vector<bool> visitado(MAX, false);

void dfs(int atual){
    visitado[atual] = true;

    for(auto i : grafo[atual]){
        if(!visitado[i]){
            dfs(i);
        }
    }
}

int main(){ _

    int n, m; cin >> n >> m;
    
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        x--;
        y--;
        grafo[x].push_back(y);
        grafo[y].push_back(x);
    }
    
    if(m != n) cout << "NO" << endl;
    else{

        dfs(0);
        
        bool tem_ciclo = true;
        for(int i = 0; i < n; i++){
            if(!visitado[i]){
                tem_ciclo = false;
                break;
            }
        }

        if(tem_ciclo) cout << "FHTAGN!" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
