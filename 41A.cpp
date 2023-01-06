#include <bits/stdc++.h>

using namespace std;


int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    string end;
    string start;
    int size = s.size();
    start = s.substr(0,size/2);
    end = s.substr(size/2);
    reverse(start.begin(),start.end());
    reverse(end.begin(),end.end());
    if(!t.compare(end+start))
        cout << "YES";
    else {
        cout << "NO";
    }
}