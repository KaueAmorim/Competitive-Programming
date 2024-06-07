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
    
    ll n, x, y, mul; cin >> n;
    
    while(n--){
        cin >> x >> y;
        mul = x * y;
        if(x % 10 == 0) swap(x,y);
        while(x % 10 != 0) x++;
        
        cout << y << " x " << x << " - " << (((x*y)-mul)/y) << " x " << y << endl;    
    }
    return 0;
}
