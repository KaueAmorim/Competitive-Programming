#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(void){ _

    int n; cin >> n;
    bool primo = true;
    
    if (n % 2 == 0){
        if (n != 2){
            primo = false;
        }
    }
    else{
        for(ll i = 2; i*i <= n; i++){
            if (n % i == 0){
               primo = false;
               break; 
            }
        }
    }
    
    if (primo){
        cout << "sim" << endl;
    }
    else{
        cout << "nao" << endl;
    }
    
    return 0;
}
