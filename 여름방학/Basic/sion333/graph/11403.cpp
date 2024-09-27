#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

bool line[100][100];
int dis[100];
int N;

int check(int begin, int end) {
  for (int i = 0; i < N; i++) fill(dis, dis+N, -1);
  queue<int> Q;
  
  dis[begin] = 0;
  Q.push(begin);

  while (!Q.empty())
  {
    int cur = Q.front(); Q.pop();
    for (int i = 0; i < N; i++) {
      if (line[cur][i] == 0) continue;
      if (dis[i] > 0)  continue;
      dis[i] = dis[cur] + 1;
      Q.push(i);
    }
  }
  if (dis[end] > 0)
    return 1;
  else
    return 0;
}

int main()  {
  ios::sync_with_stdio(0);
  cin.tie(0);

  
  cin >> N;
  for (int i = 0; i < N; i++)  {
    for (int j = 0; j < N; j++) {
      cin >> line[i][j];
    }
  }
  for (int i = 0; i < N; i++)  {
    for (int j = 0; j < N; j++) {
      cout << check(i, j) << ' ';
    }
    cout << '\n';
  }
  return 0;
}
