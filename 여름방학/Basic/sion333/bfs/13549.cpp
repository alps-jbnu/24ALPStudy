#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dis[100002];
int N, K, cur;
queue <int> Q;

int main()  {
  ios::sync_with_stdio(0);
  cin.tie(0);

  
  fill(dis, dis + 100002, -1);
  cin >> N >> K;
  
  Q.push(N);
  dis[N] = 0;
  while (!Q.empty())  {
    cur = Q.front();  Q.pop();
    // cout << "cur :" << cur << '\n';
    // finish condition
    if (cur == K) {
      cout << dis[cur];
      return 0;
    }
    // BFS : tp
    int nt = 2 * cur;  // 
      if (!(nt > 100000 || dis[nt] != -1)) {
      dis[nt] = dis[cur];
      // cout << nt << "의 dis:" << dis[nt] << '\n';
      Q.push(nt);
      }
    // BFS : walk
    for (int nxt : {cur-1, cur+1}) {
      if (nxt < 0 || nxt > 100000 || dis[nxt] != -1) {
        // cout << nxt << "는 스킵됐습니다. \n";
        continue;}
      dis[nxt] = dis[cur] + 1;
      // cout << nxt << "의 dis:" << dis[nxt] << '\n';
      Q.push(nxt);
    }
  }
  
  return 0;
}
