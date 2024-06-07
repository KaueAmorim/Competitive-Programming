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
 
    int t;
    long long int a,b;
    cin>>t;
    while(t--)
    {
        int div=0,pls=0;
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
            continue;
        }
 
        div=a/b;
        pls=(div+1)*b;
        cout<<pls-a<<endl;
 
    }
    
    return 0;
}
