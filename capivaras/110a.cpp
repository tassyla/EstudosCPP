/* Tássyla Lissa Lima - CodeForces | Nearly Lucky Number (Wrong answer on test 7) */

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int64_t n;
    int d, aux, qtd = 0;
    bool lucky = true;

    cin >> n;

    aux = n;

    while(aux>0){
        d = aux % 10;
        if (d == 4 || d == 7) qtd++;
        aux /= 10;
    }

    aux = qtd;

    while(aux>0 && lucky){
        d = aux % 10;
        if (d != 4 && d!= 7) lucky = false;
        aux /= 10;
    }

    if(lucky && qtd != 0) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
