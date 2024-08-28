#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int sensor[1010][3];
int pai[1010];
int rating[1010];

int find(int n) {
    if(pai[n] != n) {
        pai[n] = find(pai[n]);
    }
    return pai[n];
}

void união(int a, int b) {
    int pai_a = find(a);
    int pai_b = find(b);

    if(rating[pai_a] > rating[pai_b]){
        pai[pai_b] = pai_a;
    } 
    else if(rating[pai_a] < rating[pai_b]){
        pai[pai_a] = pai_b; 
    } 
    else{
        pai[pai_b] = pai_a;
        rating[pai_a]++;
    }
}

bool conectados(int a, int b) {
    return find(a) == find(b);
}

int main(){ _
    int m, n, k; cin >> m >> n >> k;
    
    // Nós 0, 1, 2, e 3 são reservados para o topo, a direita, em baixo, e a esquerda respectivamente
    for(int i = 0; i < k + 4; i++){
        pai[i] = i;
        rating[i] = 0;
    }

    for(int i = 0; i < k; i++){
        cin >> sensor[i][0];
        cin >> sensor[i][1];
        cin >> sensor[i][2];

        // Sensor enxerga a parede do topo
        if (sensor[i][1] + sensor[i][2] >= n) união(0, i + 4);

        // Sensor enxerga a parede da direita
        if (sensor[i][0] + sensor[i][2] >= m) união(1, i + 4);

        // Sensor enxerga a parede de baixo
        if (sensor[i][1] - sensor[i][2] <= 0) união(2, i + 4);

        // Sensor enxerga a parede da esquerda
        if(sensor[i][0] - sensor[i][2] <= 0) união(3, i + 4);
    }

    for(int i = 0; i < k; i++) {
        for(int j = i + 1; j < k; j++){
            int x = sensor[i][0] - sensor[j][0];
            int y = sensor[i][1] - sensor[j][1];
            double dist = sqrt((x*x) + (y*y));

            if(dist <= sensor[i][2] + sensor[j][2]) união(i + 4, j + 4);
        }
    }

    if(conectados(0, 1) || conectados(0, 2) || conectados(3, 1) || conectados(3, 2)) cout << 'N' << endl;
    else cout << 'S' << endl;
    
    return 0;
}
