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
    int n, m; cin >> n >> m;
    string a, b;
    map<string, int> mp;
    int cont;
    bool statements[500][500];
 
    while(n--){
        cin >> a;
        for(int i = 0; i < 4; i++) cin >> b;
 
        if(!mp[a]) mp[a] = ++cont;
        if(!mp[b]) mp[b] = ++cont;
 
        statements[mp[a]][mp[b]] = true;
    }
 
    for(int k = 1; k <= cont; k++){
        for(int i = 1; i <= cont; i++){
            for(int j = 1; j <= cont; j++){
                statements[i][j] |= statements[i][k] && statements[k][j];
            }
        }
    }
 
    while(m--){
        string a, b;
        cin >> a;
        for(int i = 0; i < 4; i++) cin >> b;
 
        if(!mp[a] || !mp[b]) cout << "Pants on Fire" << endl;
        else{
            if(statements[mp[a]][mp[b]]) cout << "Fact" << endl;
            else{
                if(statements[mp[b]][mp[a]]) cout << "Alternative Fact" << endl;
                else cout << "Pants on Fire" << endl;
            }
        }
    }
 
    return 0;
}
