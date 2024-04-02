#include<bits/stdc++.h>

using namespace std;

int nlist[500001];
int mlist[500001];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, i, j, x;
	
	cin >> n;
	
	for(i = 0; i < n; i++)
	{
		cin >> nlist[i];
	}
	
	sort(nlist, nlist + n);
	
	cin >> m;
	
	for(i = 0; i < m; i++)
	{
		cin >> x;
		cout << upper_bound(nlist, nlist + n, x) - lower_bound(nlist, nlist + n, x) << " ";
	}
	
	return 0;
}
