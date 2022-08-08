/* Tássyla Lissa Lima - CodeForces | Beautiful Matrix */

#include <bits/stdc++.h>

using namespace std;

#define MAX 5

void solve(){
  
    int matrix[MAX][MAX], n1, n2;

    for(int i = 0; i<MAX; i++)
        for(int j = 0; j<MAX; j++){
            cin >> matrix[i][j];
            if(matrix[i][j]){
                n1 = i;
                n2 = j;
            }
        }

    cout << abs(MAX/2-n1) + abs(MAX/2-n2) << endl;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}
