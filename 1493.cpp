#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int l;
    cin >> l;
    while(l--){
            int n ,k ;
        cin >> n >> k;
        int list[n+1];
        int count = n;
        memset(list,0,sizeof(list));
        int s = (k % 2 == 0) ? k/2 : k/2+1;
        for(int i = 1 ; i < s ; i++){
            if (abs(k-i) > 0){
                list[i] = 1;
                count -= 1;
            }
        }
        cout << count-1 << "\n";
        list[k] = 1;
        if (count-1 != 0){
            for(int i = s ;i <=n ; i++){
                if(list[i] == 0)
                    cout << i << " ";
            }
        }
        cout << "\n";
        
    }

}