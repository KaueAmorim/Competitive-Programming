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
        int n, k, soma; cin >> n >> k;
        vector<int> v(n);
        set<int> conj;
        
        for(auto& i : v){ 
            cin >> i;
            conj.insert(i);
        }
        
        if(conj.size() > k) cout << -1 << endl;
        else{
            cout << (n * k) << endl;
            for(int i = 0; i < n; i++){
		for(auto x : conj) cout << x << " ";
		for(int j = 0; j < (k - conj.size()); j++){
			cout << 1 << " ";
		}
	    }
	    cout << endl;
        }  
    }
    
    return 0;
}
