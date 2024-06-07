#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main(){
    vector<int> numbers;
    int n, x;
    cin >> n;

    for(int j = 0; j < n; j++){
        cin >> x;
        numbers.push_back(x);
    }

    sort(numbers.begin(), numbers.end());
    for(auto i = numbers.begin(); i != numbers.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    sort(numbers.begin(), numbers.end(), compare);
    for(auto i = numbers.begin(); i != numbers.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}
