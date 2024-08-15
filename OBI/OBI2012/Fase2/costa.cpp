#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e3+2;

int main(){ _

    int m, n; cin >> m >> n;
    int matriz[MAX][MAX] = {};
    
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            char s; cin >> s;
            if(s == '.') matriz[i][j] = 0; //Água será representada por 0
            else matriz[i][j] = 1; //Terra será representada por 1
        }
    }
    
    ll costa = 0;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(matriz[i][j] == 1){
                if(matriz[i][j-1] == 0 || matriz[i][j+1] == 0 || matriz[i-1][j] == 0 || matriz[i+1][j] == 0) costa++;
            }
        }
    }

    cout << costa << endl;

    return 0;
}
