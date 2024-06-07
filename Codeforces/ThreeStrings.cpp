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
        string a = ""; cin >> a;
        string b = ""; cin >> b;
        string c = ""; cin >> c;
        
        for(int i = 0; i < a.size(); i++){
            if(c[i] == a[i]) swap(b[i],c[i]);
            else if(c[i] == b[i]) swap(a[i],c[i]);
            else swap(a[i],c[i]);
        }
        
        if(a == b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}  
