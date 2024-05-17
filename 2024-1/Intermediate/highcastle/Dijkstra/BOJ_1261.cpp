#include<bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f;

int n, m;
int board[101][101];
int dist[101][101];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void Dijkstra()
{
	priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			dist[i][j] = INF;
		}
	}

	dist[1][1] = 0;

	pq.push({0, 1, 1});

	while(!pq.empty())
	{
		int curx = get<1>(pq.top());
		int cury = get<2>(pq.top());
		int cost = get<0>(pq.top());
		pq.pop();

		if(dist[curx][cury] < cost)
		{
			continue;
		}

		for(int dir = 0; dir < 4; dir++)
		{
			int nxtx = curx + dx[dir];
			int nxty = cury + dy[dir];
			
			if(nxtx >= 1 && nxtx <= n && nxty >= 1 && nxty <= m)
			{
				int ncost = cost + board[nxtx][nxty];

				if(dist[nxtx][nxty] > ncost)
				{
					dist[nxtx][nxty] = ncost;
					pq.push({dist[nxtx][nxty], nxtx, nxty});
				}
			}
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> m >> n;

	for(int i = 1; i <= n; i++) 
	{
        string row; cin >> row;

        for(int j = 1; j <= m; j++) 
        {
            board[i][j] = row[j - 1] - '0';
        }
    }

	Dijkstra();

	cout << dist[n][m];

	return 0;
}
