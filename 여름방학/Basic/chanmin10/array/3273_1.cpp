#include <bits/stdc++.h>
using namespace std;
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, x, cnt = 0;
  cin >> n;
  int num[2000001] = {};
  int arr[n];
  for(int i = 0; i < n; i++) cin >> arr[i];
  cin >> x;
  for(int i = 0; i < n; i++){
    if(arr[i] < x && num[x - arr[i]] > 0)
      cnt += num[x - arr[i]];
    num[arr[i]]++;
  }
  cout << cnt;
  return 0;
}
