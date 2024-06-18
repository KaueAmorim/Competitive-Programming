#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    
    int n; cin >> n;
    int valor[100000];
    int melhor[100000+1];
    int soma[100000+1];
    
    for(int i = 0; i < n; i++){
        cin >> valor[i];
    }
    
    soma[0] = 0;
    melhor[0] = 0;
    
    for(int i = 0; i < n; i++) {
	soma[i+1] = soma[i] + valor[i];
	melhor[i+1] = max(melhor[i], soma[i+1]);
    }
    
    int ans = 0;
    for(int i = 0; i <= n; i++) {
	ans = max(ans, melhor[i] + (soma[n] - soma[i]));
    }
    
    int tmp = 0;
    for(int i = 0; i < n; i++) {
	tmp = max(0, tmp + valor[i]);
        ans = max(ans, tmp);
    }
	
    cout << ans << endl;
   
    return 0;
}
