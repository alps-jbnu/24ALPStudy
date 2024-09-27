#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

// 회장 후보
// 한 노드에서 연결된 노드와의 거리 중 최대값 = 점수
// 점수가 가장 적은 사람 = 회장 후보
// 점수, 후보의 수, \n 회장 후보들을 오름차순으로 출력

vector <int> arr[51];
int dis[51];
int scores[51];
int N, u, v;
int ansScore = 51;
int ansCnt = 0;
vector <int> ansV;


int score(int stt) {
  int mx = 0;
  fill(dis, dis + N + 1, -1);
  queue <int> Q;
  dis[stt] = 0;
  Q.push(stt);
  while (!Q.empty())
  {
    int cur = Q.front(); Q.pop();
    for (int nxt : arr[cur])  {
      if (dis[nxt] != -1)  continue;
      dis[nxt] = dis[cur] + 1;
      mx = max(mx, dis[nxt]);
      Q.push(nxt);
    }
  }
  ansScore = min(ansScore, mx);
  return mx;
}

// void DFS(int cur) {
//   vis[cur] = 1;
//   cout << cur << ' ';
//   for (int nxt : arr[cur])  {
//     if (vis[nxt])  continue;
//     DFS(nxt);
//   }
// }

int main()  {
  ios::sync_with_stdio(0);
  cin.tie(0);

  //input
  cin >> N;
  while (true)  {
    cin >> u >> v;
    if (u == -1 && v == -1) break;
    arr[u].push_back(v);
    arr[v].push_back(u);
  }
  
  
  for (int i = 1; i <= N; i++)
    scores[i] = score(i);
  for (int i = 1; i <= N; i++)  {
    if (scores[i] == ansScore)  {
      ansCnt++;
      ansV.push_back(i);
    }
  }
    

  cout << ansScore << ' ' << ansCnt << '\n';
  for (auto el : ansV)  cout << el << ' ';
  return 0;
}
