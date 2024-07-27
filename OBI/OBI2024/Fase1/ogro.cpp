#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second

typedef long long ll;

int main(void){

    int e; cin >> e;
    int d; cin >> d;
    
    if(e > d) cout << (e + d) << endl;
    else cout << 2 * (d - e) << endl;
    
	return 0;
}
