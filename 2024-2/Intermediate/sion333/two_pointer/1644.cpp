#include <bits/stdc++.h>
using namespace std;
#define X first;
#define Y second;

int N;
bool erat[4000001];
long long cnt = 0;
long long sum = 0;
vector<int> primes;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;
  for (int i = 2; i <= N; i++) {
    if (erat[i]) continue;
    primes.push_back(i);
    for (int m = i + i; m <= N; m += i)
      erat[m] = 1;
  }
  int size = primes.size();
  primes.push_back(0);  // out of bounds 예방
  int en = 0;
  sum += primes[en];
  for (int st = 0; st < size; st++)  {
    while (en < size && sum < N) sum += primes[++en];
    if (en == size) break;
    if (sum == N) cnt++;
    sum -= primes[st];
  }
  cout << cnt;
  return 0;
}
