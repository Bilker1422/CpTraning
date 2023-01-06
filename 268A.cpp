#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    int A[num],B[num], total= 0;
    for(int i = 0 ; i < num ; i++){
        cin >> A[i] >> B[i];
    }
    for (int i = 0 ; i < num; i++){
        for (int b = 0; b < num ; b++){
            if (A[i] == B[b]){
            total++;}
        }
    }
    cout << total;

}