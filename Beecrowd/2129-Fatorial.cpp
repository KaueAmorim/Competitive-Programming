#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
ll semzero(ll n){
    ll x, y, potX, lastY;

    if(n == 0 || n == 1) return 1;

    x = n / 5;
    y = n % 5;

    //Obtém o último dígito de 2^x
    potX = x % 4;
    switch(potX){
        case 0:
            potX = 1;
            break;
        
        case 1:
            potX = 2;
            break;
        
        case 2:
            potX = 4;
            break;
        
        case 3:
            potX = 8;
            break;
    }

    //Obtém o último dígito do fatorial de Y
    switch(y){
        case 0:
            lastY = 1;
            break; 
        case 1:
            lastY = 1;
            break; 
        case 2:
            lastY = 2;
            break; 
        case 3:
            lastY = 6;
            break; 
        case 4:
            lastY = 4;
            break; 
        default:
            lastY = 0;
    }

    return (potX * semzero(x) * lastY);
}

int main(){ _
 
    ll n, resultado, instancia = 1;
    
    while(cin >> n){
        
        cout << "Instancia " << instancia << endl;
        instancia++;
        
        resultado = semzero(n);
        
        while(resultado >= 10) resultado = resultado % 10;

        cout << resultado << endl << endl;
    }
    
    return 0;
}  
