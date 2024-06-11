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
    int arr[n];
    
    for(auto& i : arr){
        cin >> i;
    }
    
    int soma_ant = -INF;
    int ans = -INF;
    
    for(auto& i : arr){
        if(soma_ant < 0){ 
            soma_ant = 0;
        }
        
        soma_ant += i;
        ans = max(soma_ant, ans);
    }
    
    cout << ans << endl;
   
    return 0;
}
