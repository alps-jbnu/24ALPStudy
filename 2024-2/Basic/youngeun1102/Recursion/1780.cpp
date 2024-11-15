#include <iostream>
using namespace std;

int n;
int paper[2200][2200];
int cnt[3];

bool check(int x, int y, int k) {
  for (int i = x; i < x + k; i++)
  for (int j = y; j < y + k; j++)
    if (paper[x][y] != paper[i][j])
    return false;
  return true;
}
void solve(int x, int y, int z)
{
  if (check(x, y, z)) {
    cnt[paper[x][y] + 1] += 1;
    return;
  }
  int k = z / 3;
  for (int i = 0; i < 3; i++)
  for (int j = 0; j < 3; j++)
    solve(x + i * k, y + j * k, k);
}
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  cin >> n;
  for (int i = 0; i < n; i++)
  for (int j = 0; j < n; j++)
    cin >> paper[i][j];
  solve(0, 0, n);
  for (int i = 0; i < 3; i++) cout << cnt[i] << "\n";
}
