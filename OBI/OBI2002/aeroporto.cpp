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

    int teste = 1;
    
    while(true){
        int a, v; cin >> a >> v;
        if(a == 0 && v == 0) break;

        vector<int> voos(101, 0);

        for(int i = 0; i < v; i++){
            int x, y; cin >> x >> y;
            voos[x]++;
            voos[y]++;
        }
        
        int maior = -INF;

        for(int i = 0; i <= a; i++){
            if(voos[i] > maior) maior = voos[i];
        }

        cout << "Teste " << teste << endl;
        teste++;

        for(int i = 1; i <= a; i++){
            if(voos[i] == maior) cout << i << " ";
        }
        
        cout << endl << endl;
    }

    return 0;
}
