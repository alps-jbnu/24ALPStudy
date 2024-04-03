#include<bits/stdc++.h>

using namespace std;

int A[1003];
int S[1003];

int main(){
	int N,pre_max;
	int S_max = 0;

	cin >> N;

	for (int i=1;i<=N;i++){
		cin >> A[i];

		pre_max = 0;
		for (int j=i-1;j>0;j--){
			if (A[i] > A[j] && S[pre_max] < S[j]) pre_max = j;
		}
		S[i] = S[pre_max]+A[i];

		if (S_max < S[i]) S_max = S[i];
	}

	cout << S_max;

	return 0;
}
