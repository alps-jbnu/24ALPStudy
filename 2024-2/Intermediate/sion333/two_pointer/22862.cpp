#include <bits/stdc++.h>
using namespace std;
#define X first;
#define Y second;

int N, K;
int arr[1000001];
int ans = 0;
int used = 0;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> K;
  for (int i = 0; i < N; i++)
    cin >> arr[i];
  int en = 0;
  if (arr[0] % 2 == 1)  used++;
  for (int st = 0; st < N; st++)  {
    while (en < N - 1)  {
      // even
      if (arr[en + 1] % 2 == 0) en++;
      // odd
      else {
        if (used < K) {
          en++;
          used++;
        }
        else break;
      }
    }
    ans = max(ans, en - st + 1 - used);
    if (arr[st] % 2 == 1) used--;
  }
  cout << ans;
  return 0;
}
