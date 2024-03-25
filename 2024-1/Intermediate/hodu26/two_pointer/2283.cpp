#include<bits/stdc++.h>

using namespace std;

bool compare(int a, int b){
	return a > b;
}

int spot[1000003] = {};

int main(){
	ios::sync_with_stdio(0);cin.tie(0);

	int N,K,a,b, k=0, min_a=1000001, max_b=0;

	cin >> N >> K;

	for (int i=0;i<N;i++){
		cin >> a >> b;

		for (int j=a;j<b;j++) spot[j] += 1;

		if (min_a > a) min_a = a;
		if (max_b < b) max_b = b;
	}

	int realSt = 0;
	int st=min_a, end=max_b;

	for (int i=st;i<=end;i++){
		k += spot[i];

		if (k >= K){
			end = i+1;
			break;
		}
	}

	while (end <= max_b){
		if (st > end) end = st;

		if (k > K){
			k -= spot[st];
			st++;
			realSt = st;

			if (spot[st] == 0){
				while (spot[st] == 0) st++;
			}
		}
		else if (k < K){
			k += spot[end];
			end++;
		}
		else {
			break;
		}
	}

	if (end <= max_b) cout << realSt << ' ' << end;
	else cout << "0 0";

	return 0;
}
