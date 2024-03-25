#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);

	vector<int> S;

	int N,K, s;

	cin >> N >> K;

	bool st_flag, pre_flag; // even = true, odd = false

	for (int i=0;i<N;i++){
		cin >> s;

		if (i == 0){
			if (s%2 == 0){
				st_flag = true;
				pre_flag = true;
			}
			else {
				st_flag = false;
				pre_flag = false;
			}

			S.push_back(1);
			continue;
		}

		if ((pre_flag && s%2==0) || (!pre_flag && s%2==1)) S[S.size()-1]++;
		else {
			S.push_back(1);
			pre_flag = !pre_flag;
		}
	}

	int st_odd;
	if (st_flag) st_odd = 1;
	else st_odd = 2;

	int odd_left = st_odd;
	int odd_right = st_odd;
	int Slen, k=0;

	if (st_flag && S.size() == 1) Slen = S[0];  // check S.size() == 1 exception
	else if (!st_flag && S.size() == 1) Slen = 0;
	else Slen = S[st_odd-1];

	for (int i=st_odd;i<S.size()-1;i+=2){
		k += S[i];

		if (k > K){
			k-= S[i];
			break;
		}

		Slen += S[i+1];
		odd_right = i;
	}

	int max_len = Slen;

	while (odd_right < S.size()-1){
		k -= S[odd_left];
		Slen -= S[odd_left-1];

		odd_left += 2;
		odd_right += 2;

		if (odd_left == S.size()) Slen = S[odd_right-1];

		while (odd_right < S.size()-1 && k <= K){
			k += S[odd_right];

			if (k > K){
				k -= S[odd_right];
				odd_right -= 2;
				if (odd_right < odd_left) odd_right = odd_left;
				break;
			}

			Slen += S[odd_right+1];

			odd_right += 2;
		}

		if (max_len < Slen) max_len = Slen;
	}

	cout << max_len;

	return 0;
}
