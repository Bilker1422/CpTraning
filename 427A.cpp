#include <bits/stdc++.h>


using namespace std;


int main(){
    int num, counter = 0 , P = 0;
    cin >> num;
    while (num--){
        int i;
        cin >> i;
        P += i != -1 ? i : 0 ;
        if (P !=0 && i == -1)
            P -= 1;
        else if (i == -1) 
            counter++;
    }
    cout << counter;
}