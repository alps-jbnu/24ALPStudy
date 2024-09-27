#include <bits/stdc++.h>
using namespace std;

int N;
char arr[6600][6600];

void copy (int size, int x, int y)  {
  for (int i = 0; i < size; i++)
    for (int j = 0; j < size; j++)
      arr[x + i][y + j] = arr[i][j];
}

void draw(int k, int x, int y)  {
  if (k == 1) {
    arr[x][y] = '*';
    return;
  }


  k = k / 3;
  draw(k, x, y);
  copy(k, x, y + k);
  copy(k, x, y + 2*k);
  copy(k, x + k, y);
  copy(k, x + k, y + 2*k);
  copy(k, x + 2*k, y);
  copy(k, x + 2*k, y + k);
  copy(k, x + 2*k, y + 2*k);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;
  draw(N, 0, 0);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (arr[i][j] == 0) cout << ' ';
      else cout << arr[i][j];
    }
    cout << '\n';
  }
  return 0;
}
