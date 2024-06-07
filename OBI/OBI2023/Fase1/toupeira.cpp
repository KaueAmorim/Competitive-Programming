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
    
    int s; cin >> s;
    int matriz [s][s] = {};
    int x, y, t; cin >> t;
    int ans = 0;
    
    while(t--){
        cin >> x >> y;
        matriz[x-1][y-1] = 1;
        matriz[y-1][x-1] = 1;
    }
    
    int p; cin >> p;
    
    while(p--){
        int n; cin >> n;
        int arr[n];
        bool teste = true;
        for(auto& i : arr) cin >> i;
        for(int j = 1; j < n; j++){ 
            if(matriz[arr[j-1]-1][arr[j]-1] == 0) teste = false;
        }
        if(teste) ans++;
    }
    
    cout << ans << endl;

    return 0;
}
