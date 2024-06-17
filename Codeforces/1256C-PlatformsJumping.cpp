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
    
    int n, m, d; cin >> n >> m >> d;
    int tabua[m];
    int soma = 0;
    
    for(auto& i : tabua){ 
        cin >> i;
        soma += i;
    }
    
    int agua = n - soma;
    
    if(agua > (d-1) * (m+1)) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        
        for(int i = 0; i < m; i++){
            int salto = d - 1;
            while(salto && agua){
                cout << "0 ";
                agua--;
                salto--;
            }
            while(tabua[i]){
                cout << (i+1) << " ";
                tabua[i]--;
            }
        }
        
        while(agua--){
            cout << "0 ";
        } 
        
        cout << endl;
    } 
    
    return 0;
}
