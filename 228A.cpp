#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    int l = 4;
    while(l--){
        int x;
        cin >> x;
        s.insert(x);
    }
    int result = 4-(s.size());
    cout << abs(result);
}