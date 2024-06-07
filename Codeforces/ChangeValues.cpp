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
    int x;
    vector<int> valores, ordenado;
    map<int,int> mp;
    
    for(int i = 0; i < n; i++){
        cin >> x;
        valores.push_back(x);
    }
    
    ordenado = valores;
    
    sort(ordenado.begin(), ordenado.end());
    
    for(int i = 0; i < ordenado.size(); i++) mp[ordenado[i]] = i;
    
    for(int i = 0; i < valores.size(); i++) cout << mp[valores[i]] << " ";
    
    cout << endl;
    
    return 0;
}
