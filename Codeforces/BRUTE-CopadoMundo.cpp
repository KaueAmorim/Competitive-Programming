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

	int x, y; cin >> x >> y;
	int n; cin >> n;
	string p; cin >> p;
	
	int bra = x;
	int arg = y;
	
	for(int i = 0; i < n; i++){
	    if(p[i] == 'B') bra++;
	    if(p[i] == 'A') arg++;
	}
	
	if(bra > arg) cout << "BRASIL" << endl;
	else if(bra == arg) cout << "EMPATE" << endl;
	else cout << "ARGENTINA" << endl;
	
	return 0;
}
