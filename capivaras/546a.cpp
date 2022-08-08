/* Tássyla Lissa Lima - CodeForces | Soldier and Bananas */

#include <bits/stdc++.h>

using namespace std;

void solve(){
  
    int k, n, w;

    cin >> k >> n >> w;

    cout << max((((k + w*k) * w)/2)-n, 0) << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
