// Complexidade: O(n)

#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;

int n, dist[maxn], vis[maxn];
vector<int> arvore[maxn];

void bfs(int a)
{
	// inicializo os vetores como 0
	memset(vis, 0, sizeof (vis));
	memset(dist, 0, sizeof (dist));

	queue<int> fila;

	fila.push(a); // adiciono a raiz na fila

	while(!fila.empty())
	{
		int b = fila.front();

		fila.pop();
		vis[b] = 1; // marco que visitei b

		for(int i = 0 ; i < arvore[b].size() ; i++) // percorro todos os filhos de b
		{
			int c = arvore[b][i];
			if(vis[c] == 0) // se eu ainda não visitei c
			{
				dist[c] = dist[b] + 1; // calculo a sua distancia ate a raiz
				fila.push(c); // adiciono c na fila
			}
		}
	}
}

int main()
{
	cin >> n;

	// monto a arvore
	for(int i = 1 ; i < n ; i++)
	{
		int u, v;
		cin >> u >> v;

		arvore[u].push_back(v);
		arvore[v].push_back(u);
	}

	//  faço R = 1
	bfs(1);
	
	int maior = -1, v = -1;

	for(int i = 1 ; i <= n ; i++) // procuramos o vertice com a maior distancia do vertice 1
	{
		
		if(dist[i] > maior)  // checamos se a distancia de 1 a i é a maior ate agora
		{                    // se sim
			maior = dist[i]; // atualizamos maior distancia
			v = i;           // atualizamos o vertice
		}
	}

	// enraizamos a arvore em v
	bfs(v);

	int u = -1, diametro = -1;
	
	for(int i = 1 ; i <= n ; i++) // procuramos o vertice com a maior distancia de v
	{
		
		if(dist[i] > diametro)  // checamos se a distancia de v a i é a maior ate agora
		{                    // se sim
			diametro = dist[i]; // atualizamos o diametro
		}
	}

	cout << diametro << "\n"; // imprimimos o diametro
	
	return 0;
}
