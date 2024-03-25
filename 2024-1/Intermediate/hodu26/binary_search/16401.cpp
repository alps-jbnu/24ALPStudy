#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);

	vector<int> L;

	int M,N,l;

	cin >> M >> N;

	for (int i=0;i<N;i++){
		cin >> l;

		L.push_back(l);
	}

	sort(L.begin(),L.end());

	// min_cmp -> check min len that will cut max times  (not div with ((M-1)/N+1), div with M)
	// max_cmp -> check max len that will cut min times
	int min_cmp = L[0]/M;
	int max_cmp = L[N-1]/((M-1)/N+1);

	if (min_cmp < 1) min_cmp = 1;

	int mid_cmp = (min_cmp+max_cmp)/2;
	int piece;
	while (max_cmp >= min_cmp){
		piece = 0;

		for (int i=N-1;i>=0;i--){
			piece += L[i]/mid_cmp;
		}

		if (piece >= M) min_cmp = mid_cmp+1;
		else max_cmp = mid_cmp-1;

		mid_cmp = (min_cmp+max_cmp)/2;
	}	

	cout << max_cmp;

	return 0;
}
