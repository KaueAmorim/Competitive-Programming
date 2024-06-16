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
    
    ll n, m, x; cin >> n >> m;
    bool sequencia = true;
    ll soma = 0;
    ll y = -1;
    
    while(n--){
        cin >> x;
        x = min(x, (m - x));
        if(x < y){
            x = max(x, (m - x));
        }
        
        if(x < y){
            sequencia = false;
            break;
        }
        else{
            y = x;
            soma += x;
        }
    }
    
    if(sequencia) cout << soma << endl;
    else cout << -1 << endl;
   
    return 0;
}
