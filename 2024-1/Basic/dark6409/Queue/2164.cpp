#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  queue<int> q;

  // 맨위부터 버리고, 맨아래로, 버리고, ... 반복.
  // 원형 큐
  for(int i=1; i<=n; ++i){
    q.push(i);
  }
  int ans = 0;

  while(q.size() != 1){
    q.pop();
    ans = q.front();
    q.push(ans);
    q.pop();
  }
  cout << q.front();
}
