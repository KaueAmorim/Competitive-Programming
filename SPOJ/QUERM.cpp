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
 
    int n = 1;
    int x; 
    int teste = 0;
    map<int,int> mp;
    
    while(n != 0){
        cin >> n;
        teste++;
        
    	for(int i = 0; i < n; i++){
    	    cin >> x;
    	    if((i + 1) == x) mp[teste] = x;
    	}
    }
    
    for(auto value : mp){
        cout << "Teste " << value.f << endl;
    	cout << value.s << endl;
    	cout << endl;
    }
    
    return 0;
} 
