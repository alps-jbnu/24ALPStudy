#include <bits/stdc++.h>
using namespace std;

int N;
int arr[3000][3000];
int ansCnt[3];
int tempCnt[3];

void func (int size, int x1, int y1) {
  int x2 = x1 + size;
  int y2 = y1 + size;
  // check (base)
  tempCnt[0] = tempCnt[1] = tempCnt[2] = 0;
  for (int i = x1; i < x2; i++)  {
    for (int j = y1; j < y2; j++) {
      if (arr[i][j] == -1)  tempCnt[0] = 1;
      else if (arr[i][j] == 0)  tempCnt[1] = 1;
      else tempCnt[2] = 1 ;
    }
  }
  
  if (tempCnt[0] + tempCnt[1] + tempCnt[2] == 1)  {
    for (int i = 0; i < 3; i++) {
      if (tempCnt[i] == 1)  {
        ansCnt[i]++;
        return;
      }
    }
  }
  // slice (recursive)
  int part = size / 3;
  for (int i : {0, part, 2*part})
    for (int j : {0, part, 2*part})
      func(part, x1 + i, y1 + j);

}


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;
  for (int i = 0; i < N; i++) 
  for (int j = 0; j < N; j++) 
    cin >> arr[i][j];
  func(N, 0, 0);

  for (int i = 0; i < 3; i++)
    cout << ansCnt[i] << '\n';
  return 0;
}
