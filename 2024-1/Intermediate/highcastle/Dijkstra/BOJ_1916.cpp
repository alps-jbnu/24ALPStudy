#include<bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;

vector<pair<int, int>> board[1001];
int dist[1001];

int n, m;

void Dijkstra(int start)
{
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	for(int i = 1; i <= n; i++)
	{
		dist[i] = INF;
	}

	dist[start] = 0;
	pq.push({0, start});

	while(!pq.empty())
	{
		int cur = pq.top().second;
		int cost = pq.top().first;
		pq.pop();

		if(dist[cur] < cost)
		{
			continue;
		}

		for(int i = 0; i < board[cur].size(); i++)
		{
			int nxt = board[cur][i].first;
			int ncost = board[cur][i].second;

			if(dist[nxt] > cost + ncost)
			{
				dist[nxt] = cost + ncost;
				pq.push({dist[nxt], nxt});
			}
		}
	}
}

int main(void)
{
	cin >> n >> m;

	for(int i = 0; i < m; i++)
	{
		int u, v, w; cin >> u >> v >> w;
		board[u].push_back({v, w});
	}

	int start, end; cin >> start >> end;

	Dijkstra(start);

	cout << dist[end];

	return 0;
}
