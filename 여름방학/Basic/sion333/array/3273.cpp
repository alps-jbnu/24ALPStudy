#include <bits/stdc++.h>
using namespace std;

int seq[100000];
int cntArr[1000000];
int n, x, needs, cnt;

int main(void) {
  // input
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> seq[i];
  cin >> x;
  // count
  for (int i = 0; i < n; i++) {
    needs = x - seq[i];
    if (needs < 0 || 1000000 < needs)
       continue;
    if (cntArr[x - seq[i]])
      cnt++;
    cntArr[seq[i]]++;
  }
  cout << cnt;
}
