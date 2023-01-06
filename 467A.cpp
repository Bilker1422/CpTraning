#include <bits/stdc++.h>


using namespace std;



int main(){
    int n;
    cin >> n;
    int cnt = 0;
    while(n--){
        int x ,y;
        cin >> x >> y;
        if (x+2 <= y )
            cnt ++;
    }
    cout << cnt;
}