#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    vector<int> num;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x == 0) num.pop_back();
        else num.push_back(x);
    }
    
    cout << accumulate(num.begin(), num.end(), 0) << endl;
}
