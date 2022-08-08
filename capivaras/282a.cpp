/* Tássyla Lissa Lima - CodeForces | Bit++ */

#include <bits/stdc++.h>

using namespace std;

void solve(){

    string x;
    int n, soma = 0;
    
    cin >> n;

    for(int i = 0; i<n; i++){
        
        cin >> x;

        if(x[1] == '+') soma++;
        else soma--;

    }

    cout << soma << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
