#include <bits/stdc++.h>
using namespace std;

int main(){
   char x;
   int count = 0;
   
   for(int i = 0; i < 6; i++){
       cin >> x;
       if(x == 'V') count++;
   }
   
   if(count == 0) cout << -1 << endl;
   else if((count == 5)||(count == 6)) cout << 1 << endl;
   else if((count == 3)||(count == 4)) cout << 2 << endl;
   else cout << 3 << endl;
}
