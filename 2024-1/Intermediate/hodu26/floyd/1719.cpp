#include<bits/stdc++.h>

using namespace std;

int min_dis[203][203];
int nxt1_part[203][203];

void make_table_floyd(int n){
	for (int k=1;k<=n;k++){
		for (int i=1;i<=n;i++){
			for (int j=1;j<=n;j++){
				if (min_dis[i][j] > min_dis[i][k]+min_dis[k][j]){
					min_dis[i][j] = min_dis[i][k]+min_dis[k][j];
					nxt1_part[i][j] = nxt1_part[i][k];
				}
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);

	int n,m, u,v,t;

	cin >> n >> m;

	for (int i=1;i<=n;i++){
		fill(min_dis[i], min_dis[i]+n+1, n*1003);
	}

	while (m--){
		cin >> u >> v >> t;

		min_dis[u][v] = t; nxt1_part[u][v] = v;
		min_dis[v][u] = t; nxt1_part[v][u] = u;
	}

	make_table_floyd(n);

	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if (i == j) cout << "- ";
			else cout << nxt1_part[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}
