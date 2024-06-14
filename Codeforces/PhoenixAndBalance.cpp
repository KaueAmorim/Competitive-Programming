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
    ll arr[30];
    arr[0] = 2;
    
    for(int i = 1; i < 30; i++){
        arr[i] = arr[i-1] * 2;
    }
    
    while(t--){
        int n; cin >> n;
        ll a = 0;
        ll b = 0;
        
        if(n == 2){
            a = arr[0];
            b = arr[1];
        }
        else{
            a += arr[n-1];
            for(int i = 0; i < ((n/2) - 1); i++){
                a += arr[i];
            }
            for(int i = ((n/2) - 1); i < (n - 1); i++){   
                b += arr[i];
            }
        }
        
        cout << abs(a-b) << endl;
    }
   
    return 0;
}
    
   
