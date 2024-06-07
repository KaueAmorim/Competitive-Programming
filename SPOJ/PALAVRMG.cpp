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
    
    while(n--){
        string p = ""; cin >> p;
        int count = 0;
        
        for(int i = 0; i < (p.size() - 1); i++){
            if(('a' <= p[i] && p[i] <= 'z') && ('a' <= p[i+1] && p[i+1] <= 'z')){ 
                if((p[i] - 'a') < (p[i+1] - 'a')) count++;
            }
            else if(('a' <= p[i] && p[i] <= 'z') && ('A' <= p[i+1] && p[i+1] <= 'Z')){
                if((p[i] - 'a') < (p[i+1] - 'A')) count++;
            }
            else if(('A' <= p[i] && p[i] <= 'Z') && ('a' <= p[i+1] && p[i+1] <= 'z')){ 
                if((p[i] - 'A') < (p[i+1] - 'a')) count++;
            }
            else if(('A' <= p[i] && p[i] <= 'Z') && ('A' <= p[i+1] && p[i+1] <= 'Z')){ 
                if((p[i] - 'A') < (p[i+1] - 'A')) count++;
            }
        }
        
        cout << p << ": ";
        if(count == (p.size() - 1)) cout << "O" << endl;
        else cout << "N" << endl;
    }
    
    return 0;
}
