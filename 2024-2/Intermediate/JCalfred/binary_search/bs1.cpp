//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int arr[100005];
//int N,M;
//
//int bs(int target) {
//	int st = 0, en = n - 1, mid;
//	while (st <= en) {
//		mid = (st + en) / 2;
//		if (arr[mid] < target)
//			st = mid + 1;
//		else if (arr[mid] > target) {
//			en = mid - 1;
//		}
//		else
//			return 1;
//	}
//	return 0;
//}
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int c;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//	cin >> m;
//	sort(arr, arr + n);
//
//	while (m--) {
//		cin >> c;
//		cout << bs(c) << "\n";
//	}
//	
//	return 0;
//}