#include <iostream>
using namespace std;
int tes;
int main() {
    cin >> tes;
    for (int i = 0; i < tes; i++) {
        if (i % 2 == 0) {
            cout << "I hate ";
        } else {
            cout << "I love ";
        }
        if (i != tes - 1) {
            cout << "that ";
        } else {
            cout << "it ";
        }
    }
}