#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
void solução() {
    int n; cin >> n;
    vector<int> v(n);
    for(auto& i : v) cin >> i;

    bool teste = true; //Assumimos que é possível formar um good array olhando da direita para esquerda.
    
    for(int i = n - 1; i >= 1; i--){ //Olhando da direita para esquerda, pois o subarray 'a' deve sempre começar no índice 0.
        
        if(v[i] > v[i - 1]) teste = false; //Se v[i] > v[i - 1], então não é mais possível formar um good array olhando da direita para esquerda, ou seja, agora devemos olhar da esquerda para direita.
        
        if(v[i] < v[i - 1] && !teste){ //Se v[i] < v[i - 1], então não é mais possível formar um good array com um índice menor do que o atual, ou seja, caso nossa condição seja verdadeira, achamos nosso good array.
            cout << i << endl; //Como um array sempre inicia no índice 0, se o 'i' é 3, significa que existem 3 elementos atrás de 'i'. Logo, o 'i' representa exatamente a quantidade de elementos de que precisamos retirar do array original.
            return;
        }
    }
    cout << 0 << endl;
}

int main(){ _
    
    int t; cin >> t;
 
    while(t--) solução();

    return 0;
}
