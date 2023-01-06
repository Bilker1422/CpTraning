#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> num;
    int x;
    cin >> x;
    while( x--){
        int l ; 
        cin >> l;
        num.insert(l);
    }
    int s;
    cin >> s;
    while( s--){
        int l ; 
        cin >> l;
        num.insert(l);
    }
    if ( n - num.size())
        cout << "Oh, my keyboard!";
    else 
        cout << "I become the guy.";
}