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
    
    ll n, a, b;
    int resposta;
    cin >> n;
    
    while(n--){
        cin >> a >> b;
        
        if(a > b){
            if((a - b) % 2 == 0) resposta = 1;
            else resposta = 2;
        }
        else if(a == b) resposta = 0;
        else{
            if((b - a) % 2 == 0) resposta = 2;
            else resposta = 1;
        }
        
        cout << resposta << endl;
    }
    
    return 0;
}
