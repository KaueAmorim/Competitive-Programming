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
int ans[MAX];

int main(){ _
    cin >> n >> m;

    while(m--){
        int a, b; cin >> a >> b;
        a--;
        b--;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
    
    memset(ans, -1, sizeof ans);

    int menor = -1;
    int posição;
    for(int i = 0; i < n; i++){
        if(grafo[i].size() < menor){
            menor = grafo[i].size();
            posição = i;
        }
    }
    
    ans[posição] = 0;
    for(auto i : grafo[posição]) ans[i] = 0;
    
    for(int i = 0; i < n; i++){
        if(ans[i] == -1) cout << 1 << " ";
        else cout << 0 << " ";
    }
    cout << endl;

    return 0;
}
