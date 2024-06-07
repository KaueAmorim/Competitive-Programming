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

    int L; cin >> L;
    int C; cin >> C;
    int x, soma = 0;
    vector<vector<int>> matriz;
    vector<int> v, sum;
    
    for(int j = 0; j < L; j++){
        for(int i = 0; i < C; i++){
            cin >> x;
            soma += x;
            v.push_back(x);
        }
        sum.push_back(soma);
        soma = 0;
        matriz.push_back(v);
        v.clear();
    }
    
    for(int i = 0; i < C; i++){
        for(int j = 0; j < L; j++){
            soma += matriz[j][i];
        }
        sum.push_back(soma);
        soma = 0;
    }
    
    cout << *max_element(sum.begin(), sum.end()) << endl;
    
    return 0;
}
