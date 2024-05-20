#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int>> path[803];  // goal, cost
int min_dis[803];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

void find_min_dist_dijkstra(int N, int st){
	pair<int,int> cur;

	fill(min_dis, min_dis+N+1, 3*N*1003);

	min_dis[st] = 0;
	pq.push({st, min_dis[st]});

	while(!pq.empty()){
		cur = pq.top(); pq.pop();

		if (min_dis[cur.first] != cur.second) continue;

		for (pair<int,int> nxt : path[cur.first]){
			if (min_dis[nxt.first] <= min_dis[cur.first]+nxt.second) continue;

			min_dis[nxt.first] = min_dis[cur.first]+nxt.second;
			pq.push({nxt.first, min_dis[nxt.first]});
		}
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);

	int N,E, a,b,c, v1,v2, dis;
	int dis1 = 0; // 1 -> v1 -> v2 -> N
	int dis2 = 0; // 1 -> v2 -> v1 -> N

	cin >> N >> E;

	while (E--){
		cin >> a >> b >> c;

		path[a].push_back({b, c});
		path[b].push_back({a, c});
	}

	cin >> v1 >> v2;

	find_min_dist_dijkstra(N,1);
	dis1 += min_dis[v1]; dis2 += min_dis[v2];

	find_min_dist_dijkstra(N,v1);
	dis1 += min_dis[v2]; dis2 += min_dis[N];

	find_min_dist_dijkstra(N,v2);
	dis1 += min_dis[N]; dis2 += min_dis[v1];

	if (min(dis1, dis2) >= 3*N*1003) cout << -1;
	else cout << min(dis1, dis2);

	return 0;
}
