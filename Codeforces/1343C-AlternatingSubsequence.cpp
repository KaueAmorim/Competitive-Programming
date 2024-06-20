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
        int n; cin >> n;
        ll numbers[n];
        
        for(auto& i : numbers) cin >> i;
     
        ll soma = 0;
        ll maior;
        int i = 0;
        
        while(i < n){
            if(numbers[i] > 0){
                maior = 0;
                while(numbers[i] > 0 && i < n){
                    if(numbers[i] > maior) maior = numbers[i];
                    i++;
                }
                soma += maior;
            }
            else{
                maior = -LINF;
                while(numbers[i] < 0 && i < n){
                    if(numbers[i] > maior) maior = numbers[i];
                    i++;
                }
                soma += maior;
            }
        }
        
        cout << soma << endl;
    }
    
    return 0;
}
