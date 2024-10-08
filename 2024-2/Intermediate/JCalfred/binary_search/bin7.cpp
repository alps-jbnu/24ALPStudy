//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<tuple>
//using namespace std;
//typedef long long ll;
//int n;
//ll arr[5005];
//ll sum[3] = { 0x7f7f7f7f7f7f,0x7f7f7f7f7f7f ,0x7f7f7f7f7f7f };
//
//int main(void) {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	sort(arr, arr + n);
//	for (int i = 0; i < n ; i++) {
//		for (int j = i + 1; j < n ; j++) {
//			int idx = lower_bound(arr, arr + n, -arr[i] - arr[j]) - arr;
//
//			for (int k = -2; k <= 2; k++) {
//				if (idx + k == i || idx + k == j || idx + k < 0 || idx + k >= n)	continue;
//				if (abs(sum[0] + sum[1] + sum[2]) > abs(arr[i] + arr[j] + arr[idx + k]))
//					tie(sum[0], sum[1], sum[2]) = { arr[i] , arr[j] , arr[idx + k] };
//			}
//			
//		}
//	}
//	sort(sum, sum + 3);
//	cout << sum[0] << ' ' << sum[1] << ' ' << sum[2];
//
//}
