#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _

    int n; cin >> n;
    
    for(int j = 0; j < n; j++){
        ll x; cin >> x;
        bool primo = true;
        
        if (x % 2 == 0){
            if (x != 2) primo = false;
        }
        else{
            for(ll i = 2; i*i <= x; i++){
                if (x % i == 0){
                    primo = false;
                    break; 
                }
            }
        }
    
        if (primo){
            cout << "Prime" << endl;
        }
        else{
            cout << "Not Prime" << endl;
        }
    }
    
    return 0;
}
