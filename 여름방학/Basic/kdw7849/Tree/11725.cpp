#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> adj[100001];
int p[100001];

void dfs(int cur) {
  for (int next : adj[cur]) {
    if (p[cur] == next) continue;
    p[next] = cur;
    dfs(next);
  }
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;
  for(int i = 0; i < N-1; i++){
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  dfs(1);
  for(int i = 2; i <= N; i++) cout << p[i] << '\n';
}
