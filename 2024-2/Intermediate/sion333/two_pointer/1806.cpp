#include <bits/stdc++.h>
using namespace std;
#define X first;
#define Y second;

int N,S;
int arr[100000];
int sum = 0;
int ans = 100001;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> S;
  for (int i = 0; i < N; i++)
    cin >> arr[i];
  int en = 0;
  sum += arr[en];
  for (int st = 0; st < N; st++)  {
    while (en < N && sum < S) sum += arr[++en];
    if (en == N)  break;
    ans = min(ans, en - st + 1);
    sum -= arr[st];
  }
  if (ans == 100001) cout << 0;
  else  cout << ans;
  return 0;
}
