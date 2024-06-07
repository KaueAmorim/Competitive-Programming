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
    string p = ""; 
    cin >> p;
    
    int one = 0;
    int zero = 0;
    
    for(int i = 0; i < n; i++){
        if(p[i] == 'n') one++;
        if(p[i] == 'z') zero++;
    }
    
    while(one--) cout << 1 << " ";
    while(zero--) cout << 0 << " ";
    
    cout << endl;
    
    return 0;
}
