#include<bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;

int board[11][11];
bool vis[11];

int n, x, res = INF;

void floyd()
{
	for(int k = 0; k < n; k++)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(board[i][j] > board[i][k] + board[k][j])
				{
					board[i][j] = board[i][k] + board[k][j];
				}
			}
		}
	}
}

void DFS(int x, int d, int cnt)
{
	vis[x] = true;
	
	if(res < d)
	{
		return;
	}
	if(cnt == n)
	{
		res = min(res, d);
		return;
	}
	for(int i = 0; i < n; i++)
	{
		if(vis[i])
		{
			continue;
		}
		vis[i] = true;
		DFS(i, d + board[x][i], cnt+1);
		vis[i] = false;
	}
}

int main(void)
{
	cin >> n >> x;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> board[i][j];
		}
	}

	floyd();

	DFS(x, 0, 1);

	cout << res;

	return 0;
}
