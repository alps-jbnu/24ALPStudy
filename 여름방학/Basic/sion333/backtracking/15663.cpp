#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[10];
int chosen[10];
bool used[10];
int st = 0;

void func(int k)  {
  if (k == M) {
    for (int i = 0; i < M; i++)
      cout << chosen[i] << ' ';
    cout << '\n';
    return;
  }
  int temp = 0;
  for (int i = 0; i < N; i++)  {
      if (temp == arr[i])  continue;
      chosen[k] = arr[i];
      temp = arr[i];
      func(k + 1);
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> M;
  for (int i = 0; i < N; i++)
    cin >> arr[i];
  sort(arr, arr + N);
  func(0);
  return 0;
}
