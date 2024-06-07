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
    
    int t;
    cin >> t;
 
    while(t--){
		ll n; cin >> n;
		vector<ll> v(n);
		for(auto &i : v) cin >> i;
 
		sort(v.begin(), v.end());
		int i=0,  j= n-1;
		vector<ll> ans;
		while(i <= j){
			if(i == j){
				ans.push_back(v[i]);
				break;
			}
 
			ans.push_back(v[j]);
			ans.push_back(v[i]);
			j--; i++;
		}
 
		reverse(ans.begin(), ans.end());
		for(auto i : ans){
			cout << i << " ";
		}
		cout << endl;
    }
    
    return 0;
}
