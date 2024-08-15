#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e4+10;

vector<vector<int>> tree(MAX);
int distancia[MAX];

void dfs(int x){

    for(auto i : tree[x]){
        if(distancia[i] == -1){
            distancia[i] = distancia[x] + 1;
            dfs(i);
        }
    }
}

int main(){ _

    int n; cin >> n;

    for(int i = 0; i < n-1; i++){
        int u, v; cin >> u >> v;
        u--;
        v--;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    
    memset(distancia, -1, sizeof distancia);

    distancia[0] = 0;
    dfs(0);

    int posição = -1;
    int max_distancia = -1;
    for(int i = 0; i < n; i++){
        if(distancia[i] > max_distancia){
            max_distancia = distancia[i];
            posição = i;
        }
    }

    memset(distancia, -1, sizeof distancia);

    distancia[posição] = 0;
    dfs(posição);
    
    int diametro = -1;
    for(int i = 0; i < n; i++){
        diametro = max(diametro, distancia[i]);
    }

    cout << diametro << endl;

    return 0;
}
