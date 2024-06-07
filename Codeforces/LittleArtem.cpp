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
        int n, m;
        cin >> n >> m;
        pair<int,int> color = {1,0};
        
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(color.f == 1){
                    cout << "W";
                    color.f--;
                }
                else cout << "B";
            }
            cout << endl;
        }
            
          
    }
    
    return 0;
}
