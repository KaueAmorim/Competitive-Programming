#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int j;
    int e = n / 2;

    for(int i = 1; i <= n; i += 2){
        j = i;
        for(int k = 0; k < e; k++){
            cout << " ";
        }
        --e;
        while (j > 0){
            cout << "*";
            --j;
        }
        cout << "\n";
    }
    
    return 0;
}
