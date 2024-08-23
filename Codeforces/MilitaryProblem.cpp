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
vector<vector<int>> tree(MAX); // Lista de adjacências para representar a árvore
vector<int> dfs_pos(MAX); // Armazena a posição de cada nó na ordem de visitação DFS
vector<int> ordem; // Armazena a ordem dos nós conforme a visitação DFS
vector<int> tam_subtree(MAX); // Armazena o tamanho da subárvore para cada nó

void dfs(int x){
    tam_subtree[x] = 1; // Define tam_subtree[x] como 1 (o nó x conta como 1 no tamanho da subárvore)
    ordem.push_back(x); // Adiciona o nó x à ordem de visitação.
    dfs_pos[x] = ordem.size() - 1; // Registra a posição do nó x na lista ordem.

    for(auto i : tree[x]) { // Para cada filho i de x, realiza DFS e atualiza o tamanho da subárvore (tam_subtree[x]) somando o tamanho da subárvore do filho.
        dfs(i);
        tam_subtree[x] += tam_subtree[i];
    }
}

int main(){ _
    int n, q; cin >> n >> q;
    
    for(int i = 2; i <= n; i++){
        int x; cin >> x;
        tree[x].push_back(i);
    }
    
    dfs(1);

    while(q--){
        int u, k; cin >> u >> k;
        
        if(k > tam_subtree[u]) cout << -1 << endl; // Verifica se k é maior do que o tamanho da subárvore do nó u (tam_subtree[u])
        else cout << ordem[dfs_pos[u] + k - 1] << endl;
    }

    return 0;
}
