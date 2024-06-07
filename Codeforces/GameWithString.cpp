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
    
    string s = "";
    cin >> s;
    stack<char> pilha;
    ll count = 1;
    
    for(ll i = 0; i < s.size(); i++){
        if(pilha.size() == 0) pilha.push(s[i]);
        else{
            if(pilha.top() == s[i]){ 
                pilha.pop();
                count++;
            }
            else pilha.push(s[i]);
        }
    }      
    
    if(count % 2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}
