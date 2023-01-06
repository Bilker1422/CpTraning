#include <bits/stdc++.h>


using namespace std;



int main(){
    string s,t;
    cin >> s >> t;
    string l;
    for(int i = 0 ; i < s.size() ;i++ ){
        if (s[i] != t[i])
            l += "1";
        else 
            l+= "0";
    }
    cout << l;
}