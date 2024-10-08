#include <bits/stdc++.h>
using namespace std;
#define X first;
#define Y second;

int N;
long long ans[2];
long long differ = 2 * 1e+9;
long long arr[100000];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;
  for (int i = 0; i < N; i++)
    cin >> arr[i];
  sort(arr, arr + N);
  for (int i = 0; i < N; i++) {
    int idx = lower_bound(arr, arr + N, -1 * arr[i]) - arr;
    for (int j = -2; j < 2; j++)  {
      int cur = idx + j;
      if (i == cur) continue;
      if (cur < 0 || cur >= N) continue;
      int temp_differ = (arr[i] + arr[cur] > 0) ? arr[i] + arr[cur] : -arr[cur] - arr[i];
      if (temp_differ < differ) {
        differ = temp_differ;
        ans[0] = arr[i];
        ans[1] = arr[cur];
      }
    }
  }
  cout << ans[0] << ' ' <<ans[1];

  return 0;
}
