#include <bits/stdc++.h>
using namespace std;
#define X first;
#define Y second;

int N;
long long arr[5000];
long long ans[3];
long long differ = 3 * 1e+9;

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
      int idx_l = lower_bound(arr + j, arr + N, target) - arr;
      for (int cur = idx_l - 1; cur <= idx_l + 1; cur++)  {
        if (cur < 0 || cur >= N)  continue;
        if (cur == i || cur == j) continue;
        if (abs(arr[i] + arr[j] + arr[cur]) < differ) {
          differ = abs(arr[i] + arr[j] + arr[cur]);
          ans[0] = arr[i];
          ans[1] = arr[j];
          ans[2] = arr[cur];
        }
      }
    }
  }
  cout << ans[0] << ' ' << ans[1] << ' ' << ans[2];

  return 0;
}
