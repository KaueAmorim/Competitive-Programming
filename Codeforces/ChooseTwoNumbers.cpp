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
    
    vector<int> A, B;
    int n, m, soma;
    bool terminar = false;
    
    cin >> n;
    
    while(n--){
        cin >> m;
        A.push_back(m);
    }
    
    cin >> m;
    
    while(m--){
        cin >> n;
        B.push_back(n);
    }
    
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < B.size(); j++){
            soma = A[i] + B[j];
            if((*find(A.begin(), A.end(), soma) != soma) && (*find(B.begin(), B.end(), soma) != soma)){
                cout << A[i] << " " << B[j] << endl;
                terminar = true;
                break;
            }
        }
        if(terminar) break;
    }
    
    return 0;
}  
