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
    
    int n, c;
    cin >> n >> c;
    
    vector<int> cotações(n);
    for (int i = 0; i < n; i++) cin >> cotações[i];
    
    ll atual_sem_ação = 0; // Lucro máximo sem ação comprada até o momento
    ll atual_com_ação = -cotações[0] - c; // Lucro máximo com ação comprada até o momento
    
    for(int i = 1; i < n; i++) {
        ll anterior_sem_ação = atual_sem_ação;
        ll anterior_com_ação = atual_com_ação;
        
        // Atualizando o estado atual sem comprar ação
        atual_sem_ação = max(anterior_sem_ação, anterior_com_ação + cotações[i]);
        
        // Atualizando o estado atual com ação comprada
        atual_com_ação = max(anterior_com_ação, anterior_sem_ação - cotações[i] - c);
    }
    
    // O resultado estará em atual_sem_ação, pois é o estado final sem ação comprada
    cout << atual_sem_ação << endl;
    
    return 0;
}
