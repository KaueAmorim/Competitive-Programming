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
        int bad = 0;
        ll n; cin >> n;
        ll nums[n];
        
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }
        
        ll m = 1e9+7;
        for(int i = n-1; i >= 0; i--){
            m = min(m, nums[i]);
            if(nums[i] > m) bad++;
        }
        
        cout << bad << endl;
    }
    
    return 0;
}
