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
    vector<int> v(n);
    for(auto& i : v) cin >> i;

    sort(v.begin(), v.end());
    int retira = 0;
    int meio = n / 2;

    for(int i = 0; i < n/2 && meio < n; i++){
        if(v[i]*2 <= v[meio]) retira++;
        else i--;
        meio++;
    }
    
    cout << n - retira << endl;

    return 0;
}
