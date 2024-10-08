#include <bits/stdc++.h>
using namespace std;
#define X first;
#define Y second;

int N;
long long M;
long long arr[1000000];
// <M이상의 나무>를 얻을 수 있는 경우 중 높이의 최대를 구하시오.
bool check(int h) {
  long long sum = 0;
  for (int i = 0; i < N; i++) {
    if (arr[i] <= h)  continue;
    sum += arr[i] - h;
    if (sum >= M) return true;
  }
  return false;
}


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> M;
  for (int i = 0; i < N; i++)
    cin >> arr[i];

  // parametric search
  long long st = 0;
  long long en = 1e+9;
  while (st < en)
  {
    long long mid = (st + en + 1) / 2;
    if (check(mid)) st = mid;
    else en = mid - 1;
  }
  cout << st;
  
  return 0;
}
