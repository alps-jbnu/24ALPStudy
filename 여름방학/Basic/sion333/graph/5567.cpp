#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

vector <int> arr[1001];
bool vis[1001];
int dis[1001];
int N, M, u, v;
int cnt = 0;

void BFS(int stt) {
  queue <int> Q;
  vis[stt] = 1;
  dis[stt] = 0;
  Q.push(stt);
  while (!Q.empty())
  {
    int cur = Q.front(); Q.pop();
    if (dis[cur] <= 2) cnt++;
    for (int nxt : arr[cur])  {
      if (vis[nxt] == 1)  continue;
      vis[nxt] = 1;
      dis[nxt] = dis[cur] + 1;
      Q.push(nxt);
    }
  }
}

void DFS(int cur) {
  vis[cur] = 1;
  cout << cur << ' ';
  for (int nxt : arr[cur])  {
    if (vis[nxt])  continue;
    DFS(nxt);
  }
}

int main()  {
  ios::sync_with_stdio(0);
  cin.tie(0);

  
  //input
  cin >> N >> M;
  while (M--)
  {
    cin >> u >> v;
    arr[u].push_back(v);
    arr[v].push_back(u);
  }

  BFS(1);
  cout << cnt - 1;
  return 0;
}
