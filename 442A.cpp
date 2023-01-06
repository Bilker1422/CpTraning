#include <bits/stdc++.h>

using namespace std;

int main(){
    set<char> s;
    string l;
    getline(cin,l);
    for (auto i : l){
        if (i >= 'a' && i <= 'z')
            s.insert(i);
    }
    cout << s.size();
}