#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll solução(int *bolsa, int dias, int taxa){

	int lucroAtual, lucroFinal, lucroMaximo;

	lucroMaximo = 0;
	lucroAtual = lucroFinal = bolsa[0];
	
	for(int i = 1; i < dias; i++){
		if((lucroAtual > bolsa[i] && (lucroAtual - bolsa[i] >= taxa)) || bolsa[i] < lucroFinal){
		
			if(lucroAtual - lucroFinal - taxa > 0) lucroMaximo += lucroAtual - lucroFinal - taxa;
			lucroAtual = lucroFinal = bolsa[i];
		}

		if(bolsa[i] > lucroAtual) lucroAtual = bolsa[i];
	}

	if(lucroAtual - lucroFinal - taxa > 0) lucroMaximo += lucroAtual - lucroFinal - taxa;

	return lucroMaximo;

}

int main (){

	int n, c; cin >> n >> c;
	int cotações[200001];

	for(int i = 0; i < n; i++) cin >> cotações[i];

	cout << solução(cotações, n, c) << endl;

        return 0;
}
