#include<bits/stdc++.h>

using namespace std;

int min_dis[203][203];

void make_table_floyd(int n){
	for (int k=1;k<=n;k++){
		for (int i=1;i<=n;i++){
			for (int j=1;j<=n;j++){
				if (min_dis[i][j] > min_dis[i][k]+min_dis[k][j]){
					min_dis[i][j] = min_dis[i][k]+min_dis[k][j];
				}
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);

	int N,M, A,B,T, c, K, max_dis, ans=4000003;
	vector<int> C;
	vector<int> ans_set;

	cin >> N >> M;

	for (int i=1;i<=N;i++){
		fill(min_dis[i], min_dis[i]+N+1, N*1003);
		min_dis[i][i] = 0;
	}

	while (M--){
		cin >> A >> B >> T;

		min_dis[A][B] = T;
	}

	make_table_floyd(N);

	cin >> K;

	for (int i=0;i<K;i++){
		cin >> c;
		C.push_back(c);
	}

	for (int i=1;i<=N;i++){
		max_dis = -1;

		for (int j=0;j<K;j++){
			if (max_dis < min_dis[C[j]][i]+min_dis[i][C[j]]){
				max_dis = min_dis[C[j]][i]+min_dis[i][C[j]];
			}
		}

		if (ans >= max_dis){
			if (ans > max_dis){
				ans = max_dis;
				ans_set.clear();
			}

			ans_set.push_back(i);
		}
	}

	for (int ans_city : ans_set){
		cout << ans_city << ' ';
	}

	return 0;
}
