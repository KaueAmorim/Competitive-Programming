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
    
    int x, k; cin >> k;
    int resposta = 0;
    int total = 0;
    vector<int> meses;
    
    for(int i = 0; i < 12; i++){
        cin >> x;
        meses.push_back(x);
        total += x;
    }
    
    if(total < k) cout << -1 << endl;
    else{
        while(k > 0){
            x = *max_element(meses.begin(),meses.end());
            resposta++;
            for(int i = 0; i < 12; i++){
                if(meses[i] == x){
                    meses[i] = -1;
                    break;
                }
            }
            k -= x;
        }
        cout << resposta << endl;
    }
    
    return 0;
}  
