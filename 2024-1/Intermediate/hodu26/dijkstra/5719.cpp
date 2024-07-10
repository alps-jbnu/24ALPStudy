#include <bits/stdc++.h>

using namespace std;

int min_dist[503];
vector<pair<int,int>> path[503]; // <도착점 , 비용>
vector<int> pre_idx[503];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

bool delected[503][503];

void shortest_path_dijkstra(int st){
	min_dist[st] = 0;
	pq.push(make_pair(st, min_dist[st]));

	while (!pq.empty()){
		pair<int,int> cur = pq.top(); pq.pop();

		if (min_dist[cur.first] != cur.second) continue;

		for (pair<int,int> nxt : path[cur.first]){
			if (delected[cur.first][nxt.first]) continue; 

			if (min_dist[nxt.first] == min_dist[cur.first] + nxt.second) pre_idx[nxt.first].push_back(cur.first);

			if (min_dist[nxt.first] <= min_dist[cur.first] + nxt.second) continue;

			min_dist[nxt.first] = min_dist[cur.first] + nxt.second;
			pq.push(make_pair(nxt.first, min_dist[nxt.first]));
			pre_idx[nxt.first].clear();
			pre_idx[nxt.first].push_back(cur.first);
		}
	}

	return ;
}

void delete_path(int S, int v){
	int u;

	if (v == S) return ;

	while (!pre_idx[v].empty()){
		u = pre_idx[v].back(); pre_idx[v].pop_back();

		delected[u][v] = true;

		delete_path(S,u);
	}

	return ;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);

	int N,M,S,D,U,V,P;

	while (1){
		cin >> N >> M;

		if (N==0 && M==0) break;

		fill(min_dist, min_dist+N+1, 10000003);

		cin >> S >> D;

		while (M--){
			cin >> U >> V >> P;

			path[U].push_back(make_pair(V,P));
		}

		shortest_path_dijkstra(S);

		delete_path(S,D);

		fill(min_dist, min_dist+N+1, 10000003);
		shortest_path_dijkstra(S);

		if (min_dist[D] == 10000003) cout << -1 << '\n';
		else cout << min_dist[D] << '\n';

		for (int i=0;i<N;i++) {
			path[i].clear();
			for (int j=0;j<N;j++) delected[i][j] = false;
		}
	}

	return 0;
}
