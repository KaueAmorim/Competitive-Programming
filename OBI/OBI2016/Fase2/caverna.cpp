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
    int arr[n+2];
    bool sequencia = true;
    
    arr[0] = -INF;
    arr[n+1] = INF;
    
    for(int i = 1; i < n + 1; i++){
        cin >> arr[i];
    }
    
    for(int i = 1; i <= n; i++){
        arr[i] = min(arr[i], (m - arr[i]));
        if(arr[i] < arr[i-1] ||  arr[i] > arr[i+1]){
            arr[i] = max(arr[i], (m - arr[i]));
        }
    }
    
    for(int i = 1; i <= n; i++){
        if(arr[i] < arr[i-1] ||  arr[i] > arr[i+1]){
            sequencia = false;
            break;
        }
        
    }
    
    if(sequencia) cout << accumulate(arr+1, arr + n + 1, 0) << endl;
    else cout << -1 << endl;
   
    return 0;
}
