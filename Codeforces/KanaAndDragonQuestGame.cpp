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
        int x, n, m; cin >> x >> n >> m;
        int ant;
        
        while(n--){
            ant = x; 
            x = (x/2) + 10;
            if(x >= ant){ 
                x = ant;
                break;
            }
        }  
        while(m--) x -= 10;
        
        if(x > 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
   
    return 0;
}
