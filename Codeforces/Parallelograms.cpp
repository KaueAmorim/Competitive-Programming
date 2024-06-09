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
    int arr[n];
    vector<pair<int,int>> v = {};
    pair<int,int> lados;
    
    for(auto& i : arr) cin >> i;
    
    sort(arr, arr + n);
    
    for(int i = 1; i < n; i++){
        if(arr[i-1] == arr[i]){
            lados.f = lados. s = arr[i];
            v.push_back(lados);
            arr[i] = 0;
        }
    }
    
    if(v.size() % 2 == 0) cout << (v.size()/2) << endl;
    else cout << ((v.size() - 1)/2) << endl;

    return 0;
}
