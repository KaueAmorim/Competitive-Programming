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

    int q, n; cin >> q;
    
    while(q--){
        cin >> n;
        if(n == 2) cout << 2 << endl;
        else{
            if(n % 2 == 0) cout << 0 << endl;
            else cout << 1 << endl;
        }
    }
    
    return 0;
}
