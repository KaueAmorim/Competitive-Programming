// Complexidade: O(n)

#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;
const int inf = 1e9+10; // valor infinito (muito grande)

int n;

// pai de cada vértice ao enraizar a árvore na segunda ponta do diâmetro
int pai[maxn];
int dist[2][maxn];

vector<int> grafo[maxn];

// encontra as distâncias de uma ponta do diâmetro para todos os vértices
// u -> vértice atual
// p -> pai do vértice atual
// d -> dist. da ponta do diâmetro para u
// q -> 0 ou 1, dependendo da ponta do diâmetro para a qual estamos realizando a dfs

void dfs(int u, int p, int d, int q)
{
	dist[q][u] = w;
	pai[u] = p;

	for (auto v: grafo[u])
		if (v != p)
			dfs(v, u, d+1, q);
}

// encontra o centro de uma árvore dados os dois vértices de um diâmetro
int find_center(int u, int v)
{
	// inicializo os pais com um valor inexistente, como -1
	dfs(u, -1, 0, 0);
	dfs(v, -1, 0, 1);

	int at = u, mn = inf, c = u;

	// percorro o caminho de v para u
	// a última dfs encontra os pais de cada vértice ao enraizar a árvore em v
	while (at)
	{	
		// atualizo a menor excentricidade encontrada no momento e o centro
		if (max(dist[0][at], dist[1][at]) < mn)
			mn = max(dist[0][at], dist[1][at]), c = at;

		at = pai[at];
	}

	return c;
}
