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
    
    int t; cin >> t;

    while(t--){
        string s; cin >> s;
        
        int resposta = INF;
        int teste[3] = {0, 0, 0};
        int inicio = 0;
        int fim = 0;

        for( ; inicio < s.size(); inicio++){
            for( ; fim < s.size(); fim++){
                if(teste[0] && teste[1] && teste[2]) break;
                teste[s[fim] - '1']++;
            }
            if(teste[0] && teste[1] && teste[2]) resposta = min(resposta, fim - inicio);
            teste[s[inicio] - '1']--;
        }

        if(resposta == INF) cout << "0" << endl;
        else cout << resposta << endl;
    }

    return 0;
}
