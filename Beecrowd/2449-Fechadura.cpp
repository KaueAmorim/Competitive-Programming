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
    
    int n, m; cin >> n >> m;
    int arr[n];
    int ans = 0;
    
    for(auto& i : arr) cin >> i;
    
    for(int i = 1; i < n; i++){
        if(arr[i-1] == m) continue;
        
        else if(arr[i-1] > m){
            arr[i-1] = arr[i-1] - m;
            ans += arr[i-1];
            arr[i] -= arr[i-1];
        }
        
        else{
            arr[i-1] = m - arr[i-1];
            ans += arr[i-1];
            arr[i] += arr[i-1];
        }
    }
    
    cout << ans << endl;
   
    return 0;
}
