#include <bits/stdc++.h>


using namespace std;

int main(){
    int n ,k ;
    cin >> n >> k;
    int cnt = 0;
    int last = 0;
    while(n--){
        int x;
        cin >> x;
        if ( x > 0){
            cnt++;
            if (cnt > k && x != last){
                cnt--;
                break;
            }
            last = x;
        }
            


    }
    cout << cnt;
}