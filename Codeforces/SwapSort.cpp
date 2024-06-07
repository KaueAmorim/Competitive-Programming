#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int minimo(int inicio, int num, vector<int> vetor){
    
    int finalzin; 
    for(int j = inicio; j < vetor.size(); j++){
        if(vetor[j] == num){
            finalzin = j;
            break;
        }  
    }
    
    return finalzin;
}

int main(){ _

    int n, x, teste, index; cin >> n;
    vector<int> v;
    map<int,int> resposta;
    
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    
    for(int i = 0; i < n; i++){
        teste = *min_element(v.begin() + i, v.end());
        index = minimo(i, teste, v);
        if(v[i] != teste){
            resposta[i] = index;
            v[index] = v[i];
        }
    }
    
    cout << resposta.size() << endl;
    
    for(auto z : resposta){
        cout << z.f << " " << z.s << endl;
    }
    
    return 0;
}
