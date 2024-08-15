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
vector<bool> visitado(MAX, 0);
vector<int> anterior(MAX);

bool dfs_ciclo(int atual){
    visitado[atual] = true;

    for(auto i : grafo[atual]){
        if(!visitado[i]){
            anterior[i] = atual;
            dfs_ciclo(i);
        }
        else if(anterior[atual] != i){
            return true;
        }
    }

    return false;
}

int main(){ _

    int n, m; cin >> n >> m;
    
    while(m--){
        int x, y; cin >> x >> y;
        x--;
        y--;
        grafo[x].push_back(y);
        grafo[y].push_back(x);
    }
    
    bool tem_ciclo = false;
    for(int i = 0; i < n; i++){
        if(!visitado[i]){
            if(dfs_ciclo(i)){
                tem_ciclo = true;
                break;
            }
        }
    }

    if(tem_ciclo) cout << "FHTAGN!" << endl;
    else cout << "NO" << endl;

    return 0;
}
