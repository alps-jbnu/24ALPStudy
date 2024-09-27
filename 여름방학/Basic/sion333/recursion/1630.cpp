#include <bits/stdc++.h>
using namespace std;

int N;
int arr[130][130];
int cnt[2];

bool check(int size, int x, int y)  {
  for (int i = x; i < x + size; i++)
    for (int j = y; j < y + size; j++)
      if (arr[i][j] != arr[x][y]) return false;
  return true;
}

void sol(int size, int x, int y) {
  // base
  if (check(size, x, y))  {
    cnt[arr[x][y]]++;
    return;
  }
  size /= 2;
  sol(size, x, y);
  sol(size, x, y + size);
  sol(size, x + size, y);
  sol(size, x + size, y + size);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;
  for (int i = 0; i < N; i++)
  for (int j = 0; j < N; j++)
    cin >> arr[i][j];
  sol(N, 0, 0);
  cout << cnt[0] << '\n' << cnt[1];
  return 0;
}
