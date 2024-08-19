#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 110;
char mapa[MAX][MAX];
bool visitado[MAX][MAX];
int l, c; 

vector<pair<int,int>> movimentos = {{-1,0}, {1,0}, {0,-1}, {0,1}};

bool valido(pair<int,int> i){
    return i.f >= 0 && i.s >= 0 && i.f < l && i.s < c
           && mapa[i.f][i.s] == 'H' && !visitado[i.f][i.s];
}

pair<int,int> bfs(pair<int,int> inicio){
    queue<pair<int,int>> fila;
    fila.push(inicio);
    visitado[inicio.f][inicio.s] = true;
    
    pair<int,int> v;
    while(!fila.empty()){
        v = fila.front();
        fila.pop();

        for(auto i : movimentos){
            i.f += v.f;
            i.s += v.s;
            if(valido(i)){
                fila.push(i);
                visitado[i.f][i.s] = true;
            }
        }
    }

    return v;
}

int main(){ _
    
    cin >> l >> c;

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cin >> mapa[i][j];
        }
    }
    
    pair<int,int> inicio;
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(mapa[i][j] == 'o'){
                inicio.f = i;
                inicio.s = j;
                break;
            }
        }
    }

    pair<int,int> resposta = bfs(inicio);

    cout << resposta.f + 1 << " " << resposta.s + 1 << endl;
}
