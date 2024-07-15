#include<bits/stdc++.h>

using namespace std;

#define X first
#define Y second

const int INF = 0x3f3f3f3f;

vector<pair<int, int>> adj[801];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
int dist[801];

int N, E;

void Dijkstra(int u)
{
	for(int i = 1; i <= N; i++)
	{
		dist[i] = INF;
	}

	dist[u] = 0;

	pq.push({0, u});

	while(!pq.empty())
	{
		int X = pq.top().X;
		int U = pq.top().Y;
		pq.pop();

		for(int i = 0; i < adj[U].size(); i++)
		{
			int V = adj[U][i].X;
			int W = adj[U][i].Y;

			if(dist[V] > X + W)
			{
				dist[V] = X + W;
				pq.push({dist[V], V});
			}
		}
	}
}

int main(void)
{
	cin >> N >> E;

	for(int i = 0; i < E; i++)
	{
		int a, b, c; cin >> a >> b >> c;

		adj[a].push_back({b, c});
		adj[b].push_back({a, c});
	}

	int v1, v2; cin >> v1 >> v2;

	long long v1_1, v1_v2, v1_n, v2_1, v2_n;
	long long ans1, ans2, ans;

	Dijkstra(v1);
	v1_1 = dist[1];
	v1_v2 = dist[v2];
	v1_n = dist[N];
	Dijkstra(v2);
	v2_1 = dist[1];
	v2_n = dist[N];

	ans1 = v1_1 + v1_v2 + v2_n;
	ans2 = v2_1 + v1_v2 + v1_n;

	ans = min(ans1, ans2);

	if(ans >= INF)
	{
		ans = -1;
	}

	cout << ans;

	return 0;
}
