#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second

typedef long long ll;

int main(){

    string p; cin >> p;
    int ans = 0;
    bool ver = true;
    
    if((p.size() < 7) || (p.size() > 8)) cout << ans << endl;
    else{
    	if((p[0] >= 'A') && (p[0] <= 'Z')) ver = true;
    	else{ 
    		ver = false;
    	}
    	if(ver != false){
    		if(p[1] >= 'A' && p[1] <= 'Z') ver = true;
    		else{ 
    			ver = false;
    		}
    	}
    	
    	if(ver != false){
    		if(p[2] >= 'A' && p[2] <= 'Z') ver = true;
    		else{ 
    			ver = false;
    		}
    	}
    	
    	if(ver != false){
    		if(p[3] >= '0' && p[3] <= '9') ans = 2;
    		else if(p[3] == '-') ans = 1;
    		else{ 
    			ver = false;
    		}
    	}
    	
    	if(ver != false){
			if(p[4] >= 'A' && p[4] <= 'Z') ans = 2;
    		else if(p[4] >= '0' && p[4] <= '9') ans = 1;
    		else{ 
    			ver = false;
    		}
    	}
    	
    	if(ver != false){
    		if(p[5] >= '0' && p[5] <= '9') ver = true;
    		else{ 
    			ver = false;
    		}
    	}
    	
    	if(ver != false){
    		if(p[6] >= '0' && p[6] <= '9') ver = true;
    		else{ 
    			ver = false;
    		}
    	}
    	
    	if((ver != false) && (p.size() == 8)){
    		if(p[7] >= '0' && p[7] <= '9') ver = true;
    		else{ 
    			ver = false;
    		}
    	}
    	
    	if(ver) cout << ans << endl;
    	else cout << 0 << endl;
    }

    
	return 0;
}
