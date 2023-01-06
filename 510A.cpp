#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,m;
    cin >> n >> m;
    char a[n][m];
    memset(a,'.',sizeof(a));

    for(int i = 0; i < n; i+=2){
        for (int j = 0; j < m; j++) {
            a[i][j] = '#';
        }
    }
    bool flag = false;
    for(int i= 1; i < n; i+=2){
        if(flag){
            a[i][0] = '#';
            flag = !flag;
        }
        else{
            a[i][m-1] = '#';
            flag = !flag;
        }

    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j];
        }
        cout << endl;
    }


}
