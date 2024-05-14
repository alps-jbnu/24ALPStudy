#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);

	vector<int> Solv;

	int N, solv;

	cin >> N;

	for (int i=0;i<N;i++){
		cin >> solv;

		Solv.push_back(solv);
	}

	sort(Solv.begin(),Solv.end());

	long long int sum, min_sum = 3000000001;

	int left,right;
	int ans_left,ans_mid,ans_right;

	bool ans_flag = false;

	for (int mid=1;mid<N-1;mid++){
		left = mid-1; right = mid+1;

		while (1){
			sum = (long long int)Solv[left]+Solv[mid]+Solv[right];  // long long int 명시적 형변환 필요

			if (min_sum > abs(sum)){
				min_sum = abs(sum);
				ans_left = left;
				ans_mid = mid;
				ans_right = right;
			}

			if (sum > 0){
				if (left < 1) break;
				else left--;
			}
			else if (sum < 0){
				if (right > N-2) break;
				else right++;
			}
			else {
				ans_flag = true;
				break;
			}
		}
		if (ans_flag) break;
	}

	cout << Solv[ans_left] << ' ' << Solv[ans_mid] << ' ' << Solv[ans_right];

	return 0;
}
