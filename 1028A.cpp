#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,m;
    cin >> n >> m;
    char s[n+1][m+1];
    int x = INT_MAX, y = INT_MIN;
    int x2 = INT_MIN, y2 = INT_MAX;
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= m ; j++){
            cin >> s[i][j];
            
            if ( s[i][j] == 'B'){
                x = min(x,i);
                y = max(y,j);
                x2 = max(x2,i);
                y2 = min(y2,j);
            }
        }
    }
    int ax = abs(x2-x);
    int ay = abs(y2-y);
    if (ax == 0 || ay == 0){
        cout << x << " " << y;
    }
    else {
        cout << (x+x2)/2 << " " << (y2+y)/2;
    } 
}