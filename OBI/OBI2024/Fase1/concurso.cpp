#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second

typedef long long ll;

int main(){

    int n; cin >> n;
    int k; cin >> k;
    int ans = 0;
    int i = 0;
    int arr[n];
    
    for(auto& i : arr) cin >> i;
    
    sort(arr, arr + n);
    
    while(k--){
        ans = arr[(n-1) - i];
        i++;
    }
    
    cout << ans << endl;
    
	return 0;
}
