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
    int resposta = 0;
    vector<pair<int,int>> botas(61,{0,0});
    
    for(int i = 0; i < n; i++){
        int tam; cin >> tam;
        char pe; cin >> pe;
        
        if(pe == 'E') botas[tam].f++;
        else botas[tam].s++;
    }
    
    for(int i = 0; i < botas.size(); i++){
        resposta += min(botas[i].f, botas[i].s);
    }
    
    cout << resposta << endl;
    
    return 0;
}
