//bfs

#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100001];// 
int p[100001]; // 각 노드의 부모 번호를 저장할 배열. 루트의 부모는 0

void bfs(int root){
  queue<int> q;
  q.push(root);

  while(!q.empty()){
    int cur = q.front();
    q.pop();
    //cout << cur << ' ';
    for(int nxt : adj[cur]){
      if(p[cur] == nxt) continue; // nxt가 cur의 부모면 건너뜀
      q.push(nxt);
      p[nxt] = cur;
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  for(int i=0; i<n-1; i++){
    int a, b; cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  bfs(1);
  for(int i=2; i<=n; i++) cout << p[i] << '\n';
}
