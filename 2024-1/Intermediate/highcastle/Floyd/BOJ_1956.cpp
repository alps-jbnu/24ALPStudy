#include<bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3f;

int v, e;
int board[401][401];

void floyd()
{
	for(int k = 1; k <= v; k++)
	{
		for(int i = 1; i <= v; i++)
		{
			for(int j = 1; j <= v; j++)
			{
				if(board[i][j] > board[i][k] + board[k][j])
				{
					board[i][j] = board[i][k] + board[k][j];
				}
			}
		}
	}
}

void check()
{
	int ans = INF;
	for(int i = 1; i <= v; i++)
	{
		ans = min(ans, board[i][i]);
	}

	cout << ((ans == INF) ? -1 : ans);
}

int main(void)
{
	cin >> v >> e;

	for(int i = 1; i <= v; i++)
	{
		for(int j = 1; j <= v; j++)
		{
			board[i][j] = INF;
		}
	}

	for(int i = 0; i < e; i++)
	{
		int a, b, c; cin >> a >> b >> c;
		board[a][b] = c;
	}

	floyd();

	check();

	return 0;
}
