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

    string joia;
    set<string> total;
    
    while(cin >> joia) total.insert(joia);
    
    cout << total.size() << endl;
    
    return 0;
}
