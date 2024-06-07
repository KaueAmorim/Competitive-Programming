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
    
    int t; cin >> t;
    
    while(t--){
        string d;
	cin >> d;
	set<pair<pair<int, int>, pair<int, int>>> mapa;
	pair<int, int> vindo, indo;
	vindo = indo = {0, 0};
	int tempo = 0;
	for(int i = 0; i < d.size(); i++){
		if(d[i] == 'N') indo.f++;
		else if(d[i] == 'S') indo.f--;
		else if(d[i] == 'E') indo.s++;
		else indo.s--;
		if(mapa.count({vindo, indo}) || mapa.count({indo, vindo})) tempo++;
		else {
		    tempo += 5;
		    mapa.insert({vindo, indo});
		}
		vindo = indo;
	}
	cout << tempo << endl;
    }
    
    return 0;
}
