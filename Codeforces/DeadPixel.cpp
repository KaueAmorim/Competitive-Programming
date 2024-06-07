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
 
    int a, b, x, y, n, xE, xD, yC, yB, xmax, ymax;
    cin >> n;
    
    while(n--){
        cin >> a >> b >> x >> y;
 
        xE = x;
        xD = a - x - 1;
        yC = y;
        yB = b - y - 1;
        
        xmax = max(xE,xD) * b;
        ymax = max(yC,yB) * a;
        
        cout << max(xmax,ymax) << endl;
    }
    return 0;
}
