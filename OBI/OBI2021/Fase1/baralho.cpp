#include <bits/stdc++.h>
using namespace std;

bool duplicate(vector<string> v){
    string at = "";
    string ant = "";
    bool verificador = true;
    for(auto i = v.begin(); i != v.end(); i++){
    	at = *i;
    	if(at == ant) verificador = false;
    	ant = *i;
    }
    return verificador;
}

int main (){
    string baralho = "";
    string atual = "";
    string teste = "";
    vector<string> C, E, U, P;
    cin >> baralho;
    
    for(int i = 0; baralho != teste; i += 3){
    
       for(int j = i; j < (i + 3); j++){
          atual += baralho[j];
          teste += baralho[j];
       }
       
       if(baralho[i+2] == 'C') C.push_back(atual);
       else if(baralho[i+2] == 'E') E.push_back(atual);
       else if(baralho[i+2] == 'U') U.push_back(atual);
       else P.push_back(atual);
       atual = "";
    }
    
    sort(C.begin(), C.end());
    sort(E.begin(), E.end());
    sort(U.begin(), U.end());
    sort(P.begin(), P.end());

    if(duplicate(C)) cout << (13 - C.size()) << endl;
    else cout << "erro" << endl;
    
    if(duplicate(E)) cout << (13 - E.size()) << endl;
    else cout << "erro" << endl;
    
    if(duplicate(U)) cout << (13 - U.size()) << endl;
    else cout << "erro" << endl;
    
    if(duplicate(P)) cout << (13 - P.size()) << endl;
    else cout << "erro" << endl;

    return 0;
}

