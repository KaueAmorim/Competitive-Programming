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
        string pro = ""; cin >> pro;
        string bra = ""; cin >> bra;
        int i = 0;
        int count = 0;
        
        
        while((i != pro.size()) && (count < 2)){
            int j = 0;
            count++;
            while(j != bra.size()){
                if(i == pro.size()) break;
                if(bra[j] == pro[i]){
                    i++;
                }
                else i = 0;
                j++;
            }
        }
        
        if(i == pro.size()) cout << "S" << endl;
        else{
            int i = 0;
            int count = 0;
            
            while((i != pro.size()) && (count < 2)){
                int j = (bra.size() - 1);
                count++;
                while(j >= 0){
                    if(i == pro.size()) break;
                    if(bra[j] == pro[i]){
                        i++;
                    }
                    else i = 0;
                    j--;
                }
            }
            
            if(i == pro.size()) cout << "S" << endl;
            else cout << "N" << endl;
        }
    }
    
    return 0;
}   
