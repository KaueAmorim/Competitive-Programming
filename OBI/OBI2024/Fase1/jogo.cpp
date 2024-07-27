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
    
    int n, q; cin >> n >> q;
    char matriz1[55][55] = {};
    char matriz2[55][55] = {};
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> matriz1[i][j];
        }
    }
    
    for(int op = 1; op <= q; op++){
    	for(int i = 1; i <= n; i++){
        	for(int j = 1; j <= n; j++){
        
            	int vivas = 0;
    			
    			if(op % 2 == 0){
            		
            		if(matriz2[i-1][j-1] == '1') vivas++;
                	if(matriz2[i-1][j] == '1') vivas++;
                	if(matriz2[i-1][j+1] == '1') vivas++;
                	if(matriz2[i][j-1] == '1') vivas++;
                	if(matriz2[i][j+1] == '1') vivas++;
                	if(matriz2[i+1][j-1] == '1') vivas++;
                	if(matriz2[i+1][j] == '1') vivas++;
                	if(matriz2[i+1][j+1] == '1') vivas++;
            
            		if(matriz2[i][j] == '0'){
                		if(vivas == 3) matriz1[i][j] = '1';
                		else matriz1[i][j] = '0';
            		}
            		else{
                		if(vivas == 3 || vivas == 2) matriz1[i][j] = '1';
                		else matriz1[i][j] = '0';
            		}
            	}
            	
            	else{
            	
            	    if(matriz1[i-1][j-1] == '1') vivas++;
                	if(matriz1[i-1][j] == '1') vivas++;
                	if(matriz1[i-1][j+1] == '1') vivas++;
                	if(matriz1[i][j-1] == '1') vivas++;
                	if(matriz1[i][j+1] == '1') vivas++;
                	if(matriz1[i+1][j-1] == '1') vivas++;
                	if(matriz1[i+1][j] == '1') vivas++;
                	if(matriz1[i+1][j+1] == '1') vivas++;
            
            		if(matriz1[i][j] == '0'){
                		if(vivas == 3) matriz2[i][j] = '1';
                		else matriz2[i][j] = '0';
            		}
            		else{
                		if(vivas == 3 || vivas == 2) matriz2[i][j] = '1';
                		else matriz2[i][j] = '0';
            		}
            	}
        	}
    	}
    }
    
    cout << endl;
    
    if(q % 2 == 0){
        for(int i = 1; i <= n; i++){
        	for(int j = 1; j <= n; j++){
            	cout << matriz1[i][j];
        	}
        	cout << endl;
    	}
    }
    else{
        for(int i = 1; i <= n; i++){
        	for(int j = 1; j <= n; j++){
            	cout << matriz2[i][j];
        	}
        	cout << endl;
    	}
    }
    
    return 0;
}
