#include <iostream>
#include <string>
using namespace std;

int main(){
    string senha; 
    int size;
    cin >> senha >> size;
    char str_lower[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char str_upper[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char values[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    
    bool upper = false;
    bool lower = false;
    bool number = false;
    
    if(size >= 8){
        for(int i = 0; i < 26; i++){
            for(int k = 0; k < size; k++){
                if(senha[k] == str_lower[i]){
                    lower = true;
                }
                if(senha[k] == str_upper[i]){
                    upper = true;
                }
            }
            if(upper && lower){
                break;
            }
        }
        for(int j = 0; j < 10; j++){
            for(int z = 0; z < size; z++){
                if(senha[z] == values[j]){
                    number = true;
                    break;
                }
            }
        }

    }
    
    if(upper && lower && number){
        if(size <= 10) cout << "Password is weak.!" << "\n";
        else if(size <= 15) cout << "Password is strong!" << "\n";
        else cout << "Password is very strong!" << "\n";
    }
    else{
        cout << "Password does not meet the requirements..." << "\n";
    }
}
