#include <bits/stdc++.h>
using namespace std;

int N;
char arr[6200][6200];

void draw(int k, int x, int y)  {
  if (k == 3) {
    arr[x][y] = '*';
    arr[x+1][y-1] = '*';
    arr[x+1][y+1] = '*';
    arr[x+2][y-2] = '*';
    arr[x+2][y-1] = '*';
    arr[x+2][y] = '*';
    arr[x+2][y+1] = '*';
    arr[x+2][y+2] = '*';
    return;
  }
  int a = (k-2) / 2 + 1; // 바닥 반토막 + 1 
  draw(k/2, x, y);
  draw(k/2, x + k/2, y - a);
  draw(k/2, x + k/2, y + a);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;

  draw(N, 0, N - 1);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 2*N - 1; j++) {
      if (arr[i][j] == 0) cout << ' ';
      else cout << arr[i][j];
    }
    cout << '\n';
  }
  return 0;
}
