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
    int colunas[n];
    int esquerda[n];
    int direita[n];
    
    for(auto& i : colunas) cin >> i;
    
    esquerda[0] = 1;
    for(int i = 1; i < n; i++){
        esquerda[i] = min(colunas[i], esquerda[i - 1] + 1);
    }
    
    direita[n - 1] = 1;
    for(int i = n - 2; i >= 0; i--){
        direita[i] = min(colunas[i], direita[i + 1] + 1);
    }
    
    int resposta = 0;
    for(int i = 0; i < n; i++){
        resposta = max(resposta, min(esquerda[i], direita[i]));
    }
    
    cout << resposta << endl;
    
    return 0;
}
