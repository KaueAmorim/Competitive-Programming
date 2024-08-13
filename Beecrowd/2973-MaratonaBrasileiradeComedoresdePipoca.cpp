#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e5+10;
int n, c, t;
int pipocas[MAX];

bool possivel(ll chute){
    
    int competidores = 1;
    ll resta = chute * t;
    
    for(int i = 0; i < n; i++){
        if(resta >= pipocas[i]) resta -= pipocas[i];
        else{
            resta = chute * t;
            competidores++;
            i--;
        }
        if(competidores > c) return 0;
    }

    return 1;
}

int main(){ _
    
    cin >> n >> c >> t;
    
    for(int i = 0; i < n; i++) cin >> pipocas[i];

    int inicio = 0, fim = 1e9+1;
    while(fim > inicio){
        ll meio = (inicio + fim)/2;

        if(!possivel(meio)) inicio = meio + 1;
        else fim = meio;
    }

    cout << inicio << endl;
    
    return 0;
}
