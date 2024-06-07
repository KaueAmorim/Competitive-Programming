#include <bits/stdc++.h>
using namespace std;

int main(){
    string notes; 
    int shift;
    cin >> notes >> shift;
    string encoded = "";
    for (char c : notes) {
        int shifted = (static_cast<int>(c) << shift);
        if (shifted % 2 == 0) {
            encoded += bitset<32>(shifted).to_string();
        } else {
            stringstream ss;
            ss << hex << shifted;
            encoded += ss.str();
        }
    }
    cout << encoded << endl;
}
