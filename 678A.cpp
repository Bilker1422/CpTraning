#include <bits/stdc++.h>

using namespace std;

int main(){
    int n , k;
    cin >> n >> k;
    int dis = k;
    while(k <= n){
        k = k+dis;
    }
    cout << k;
}