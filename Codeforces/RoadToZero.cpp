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
    
    int t; cin >> t;
    
    
    while(t--){
        ll x, y, a, b; cin >> x >> y >> a >> b;
        ll ans = 0;
        ll minimo = min(x,y);
        
        if(2*a <= b){
        	if(x != 0) ans += (x * a);
            if(y != 0) ans += (y * a);
        }
        else{
            if((x != 0) && (y != 0)){
            	ans += (minimo * b);
            	x -= minimo;
            	y -= minimo;
            }
            if(x != 0) ans += (x * a);
            if(y != 0) ans += (y * a);
        }
        
        cout << ans << endl;
    }
   
    return 0;
}
