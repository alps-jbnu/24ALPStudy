#include <bits/stdc++.h>
using namespace std;
// 목표 = N개의 과자가 있을 때 M개 이상의 과자로 나눌 수 있는 최대 길이?
// M개 이상의 과자를 나눌 수 있는지 없는지를 확인 = >parametric search
// M개 이상이면 바로 멈춰야함 (cnt를 끝까지 세면 오버플로우 뜰듯)

int arr[1000000];
int K, N;

bool check(int n)  {
  long long cnt = 0;
  for (int i = 0; i < K; i++) {
    cnt += arr[i] / n;
    if (cnt >= N) return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> K;  // 과자 수 K, 조카 수 N
  for (int i = 0; i < K; i++)
    cin >> arr[i];

  long long st = 0;
  long long en = 1e+9;
  while (st < en)  {
    long long mid = (st + en + 1) / 2;
    if (check(mid)) st = mid;
    else en = mid - 1;
  }
  cout << st;

  return 0;
}
