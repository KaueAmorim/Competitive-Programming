//RESPOSTA se houver mais de um par possível, indique qualquer um entre os possíveis.

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
int n, m;
vector<int> metro[2][MAX]; // metro[0] representa o sistema Círculo, metro[1] o Quadrado
int distancia[2][MAX]; // dist[0] -> sistema Círculo e dist[1] -> sistema Quadrado
int pai[2][MAX]; // pai de cada vértice ao enraizar cada grafo em um vértice específico

void dfs(int atual, int dad, int x){

    for(auto i : metro[x][atual]){
        if(i == dad) continue;
        
        distancia[x][i] = distancia[x][atual] + 1;
        pai[x][i] = atual;
        dfs(i, atual, x);
    }
}

pair<int, int> find_diametro(int x){
    
    // qtd. de vértices no grafo
    int t = (x == 0 ? n : m); // operador ternário (condição ? valor_se_verdadeiro : valor_se_falso)
    
    // 1a dfs em uma raíz arbitrária, digamos 1
    distancia[x][1] = 0;
    dfs(1, 0, x);
    
    // encontra o vértice u mais distante da raíz
    int u = -1;
    int max_distancia = -1;
    for(int i = 1; i <= t; i++){
        if(distancia[x][i] > max_distancia){
            max_distancia = distancia[x][i];
            u = i;
        }
    }
    
    // u será uma das pontas do diâmetro, fazemos dfs nele
    distancia[x][u] = 0;
    dfs(u, 0, x);
    
    // encontramos a segunda ponta do diâmetro
    int v = -1;
    max_distancia = -1;
    for(int i = 1; i <= t; i++){
        if(distancia[x][i] > max_distancia){
            max_distancia = distancia[x][i];
            v = i;
        }
    }

    return {u, v};
}

int find_centro(int x){
    pair<int, int> diam = find_diametro(x);
    
    // pontas do diâmetro
	int u = diam.f; 
    int v = diam.s;

    // após encontrar o diâmetro, a segunda dfs enraizou a árvore em u
	// logo, iteramos o caminho de u para v pelos pais até encontrarmos o centro

	// como o grafo não possui pesos, o centro será o vértice no "meio" do caminho entre u e v
	// logo, subimos pelos pais partindo de u até encontrar esse vértice, guardando o tamanho do caminho em qtd

    int atual = v; 
    int qtd = 0;
    while(true){
        // encontramos o centro
		if(qtd == distancia[x][v]/2) return atual;

		atual = pai[x][atual]; 
        qtd++;
    }
}

int main(){ _
    cin >> n >> m;
    int a, b;

    for(int i = 0; i < n-1; i++){
        cin >> a >> b;

        metro[0][a].push_back(b);
        metro[0][b].push_back(a);
    }

    for(int i = 0; i < m-1; i++){
        cin >> a >> b;

        metro[1][a].push_back(b);
        metro[1][b].push_back(a);
    }
    
    cout << find_centro(0) << " " << find_centro(1) << endl;

    return 0;
}
