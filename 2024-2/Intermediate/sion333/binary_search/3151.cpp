#include <bits/stdc++.h>
using namespace std;
#define X first;
#define Y second;

int N;
long long cnt = 0;
long long arr[100000];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;
  for (int i = 0; i < N; i++)
    cin >> arr[i];
  sort(arr, arr + N);
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      int target = -arr[i] - arr[j];
      int idx_lower = lower_bound(arr, arr + N, target) - arr;
      int idx_upper = upper_bound(arr, arr + N, target) - arr;
      cnt += idx_upper - idx_lower;
      if (idx_lower <= i && i < idx_upper)  cnt--;
      if (idx_lower <= j && j < idx_upper)  cnt--;
    }
  }
  cout << cnt / 3;

  return 0;
}
