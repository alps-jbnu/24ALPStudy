#include <bits/stdc++.h>
using namespace std;
#define X first;
#define Y second;

int N, M;
int arr[10001];
int sum = 0;
int cnt = 0;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> M;
  for (int i = 0; i < N; i++)
    cin >> arr[i];
  int en = 0;
  sum += arr[en];
  for (int st = 0; st < N; st++)  {
    while (en < N && sum < M) sum += arr[++en];
    if (en == N) break;
    if (sum == M) cnt++;
    sum -= arr[st];
  }
  cout << cnt;
  return 0;
}
