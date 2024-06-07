#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;	
    string str_romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string result = "";
    int count = 0;
    for(int i = 0; i < 13; i++){
        while((n - values[i]) >= 0 && count < 3){
            result += str_romans[i];
            n -= values[i];
            count += 1;
        }
    count = 0;
    }
    cout << result << "\n";
}
