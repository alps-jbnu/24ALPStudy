#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

vector<int> lines[20001];
bool colors[20001];
bool vis[20001];
bool possible = true;

void DFS(int x) {
  if (!possible)  return;

  for (auto el: lines[x]) {
    if (vis[el])  {
      if (el == x)  continue;
      if (colors[el] == colors[x]) {
      possible = false;
      return;
      }
      else continue;
    }
    colors[el] = !colors[x];
    vis[el] = 1;
    DFS(el);
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int K;
  int V, E;
  int u, v;
  cin >> K;
  while (K--)
  {
    // input
    possible = true;
    cin >> V >> E;
    for (int i = 1; i <= V; i++)  {
      vis[i] = 0;
      lines[i].clear();
    }

    for (int i = 0; i < E; i++) {
      cin >> u >> v;
      lines[u].push_back(v);
      lines[v].push_back(u);
    }
    for (int i = 1; i <= V; i++)  {
    if (vis[i]) continue;
    colors[i] = 0;
    vis[i] = i;
    DFS(i);
    }
    if (possible) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;    
}
