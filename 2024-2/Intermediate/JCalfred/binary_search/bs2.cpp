//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int arr[500005];
//vector<int> v1;
//int N,M;
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int c;
//	cin >> N;
//	for (int i = 0; i < N; i++) cin >> arr[i];
//	sort(arr, arr + N);
//	cin >> M;
//	while (M--) {
//		cin >> c;
//		cout << upper_bound(arr,arr+N,c) - lower_bound(arr, arr + N, c) << " ";
//	}
//
//	return 0;
//}
//
//int lower_idx(int target) {
//	int st = 0, en = N, mid;
//	while (st < en) {
//		mid = (st + en) / 2;
//		if (arr[mid] >= target)
//			en = mid;
//		else if (arr[mid] < target) {
//			st = mid + 1;
//		}
//	}
//	return st;
//}
//int upper_idx(int target) {
//	int st = 0, en = N, mid;
//	while (st < en) {
//		mid = (st + en) / 2;
//		if (arr[mid] > target)
//			en = mid;
//		else {
//			st = mid + 1;
//		}
//	}
//	return st;
//}