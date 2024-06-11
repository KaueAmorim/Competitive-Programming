#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
bool compare(pair<int,int> a, pair<int,int> b){
    return a.s < b.s;
}

int main(){ _
    
    int n; cin >> n;
    pair<int,int> arr[n];
    
    for(auto& i : arr){
        cin >> i.f;
        cin >> i.s;
    }
    
    sort(arr, arr + n, compare);
    
    int fim = -1;
    int ans = 0;
    for(auto i : arr){
        if(i.f > fim){
            fim = i.s;
            ans++;
        }
    }
    
    cout << ans << endl;
   
    return 0;
}
