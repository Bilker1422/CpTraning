#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string stone;

  cin >> n;
  cin >> stone;

  int ctr = 0;

  for (int i = 1; i < n; i++)
    if (stone[i] == stone[i - 1])
      ctr++;

  cout << ctr;
  return 0;
}