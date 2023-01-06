#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>> n;
    string s;
    cin >> s;
    int list[26];
    memset(list,0,sizeof(list));
    for(int i = 0 ;i < s.size() ;i ++){
        list[tolower(s[i])-'a']++;
    }
    for(int i =0 ; i < 26 ;i++){
        if(list[i] == 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    
}


