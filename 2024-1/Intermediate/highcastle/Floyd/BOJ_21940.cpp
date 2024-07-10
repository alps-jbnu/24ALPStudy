#include<bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f;

int board[201][201];
int man[201];
vector<int> ans;
int res = INF;

int n, m, k;

void floyd()
{
	for(int k = 1; k <= n; k++)
	{
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				if(board[i][j] > board[i][k] + board[k][j])
				{
					board[i][j] = board[i][k] + board[k][j];
				}
			}
		}
	}
}

int check(int x)
{
	int maxs = 0;

	for(int j = 1; j <= n; j++)
	{
		maxs = max(board[x][j], maxs);
	}

	return maxs;
}

int main(void)
{
	cin >> n >> m;

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			board[i][j] = (i == j) ? 0 : INF;
		}
	}

	for(int i = 0; i < m; i++)
	{
		int u, v, w; cin >> u >> v >> w;

		board[u][v] = w;
	}

	cin >> k;

	for(int i = 1; i <= k; i++)
	{
		cin >> man[i];
	}

	floyd();


	for(int i = 1; i <= n; i++)
    {
        bool flag = true;
        int x = 0;

        for(int j = 1; j <= k; j++)
        {
        	if((board[man[j]][i] == INF) || (board[i][man[j]] == INF))
        	{
        		flag = false;
        		break;
        	}

        	x = max(x, board[man[j]][i] + board[i][man[j]]);
        }

        if(flag)
        {
        	if(res > x)
        	{
        		res = x;
        		ans.clear();
        		ans.push_back(i);
        	}
        	else if(res == x)
        	{
        		ans.push_back(i);
        	}
        }
    }

	sort(ans.begin(), ans.end());

	for(int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}

	return 0;
}
