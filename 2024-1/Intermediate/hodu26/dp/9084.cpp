#include<bits/stdc++.h>

using namespace std;

int money[23];
int cases[10003];

int main(){
	int T,N,M;

	cin >> T;

	while (T--){
		cin >> N;

		for (int i=1;i<=N;i++) cin >> money[i];

		cin >> M;

		cases[0] = 1;

		for (int i=1;i<=N;i++){
			for (int j=money[i];j<=M;j++){
				cases[j] += cases[j-money[i]];
			}
		}                                                                                                                                                                                                                                                                                                                                     

		cout << cases[M] << '\n';

		for (int i=1;i<=N;i++) money[i] = 0;
		for (int i=1;i<=M;i++) cases[i] = 0;
	}

	return 0;
}
