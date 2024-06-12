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
    
    int n; cin >> n;
    string arr[n];
    set<string> page;

    for(auto& i : arr) cin >> i;
    
    for(int i = (n - 1); i >= 0; i--){
        if(page.count(arr[i]) == 0){ 
            cout << arr[i] << endl;
            page.insert(arr[i]);
        }
    }
   
    return 0;
}
