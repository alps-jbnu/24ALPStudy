//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int n, m;
//int arr[100005];
//int mn = 0x7fffffff;
//
//int main(void) {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)	cin >> arr[i];
//	sort(arr, arr + n);
//	int st = 0, en = 0;
//
//	while (true) {
//		if (arr[en] - arr[st] >= m) {
//			if (st >= n)break;
//			mn = min(mn, arr[en] - arr[st]);
//			st++;
//
//		}
//		else {	//arr[en] - arr[st] < m
//			if (en >= n)break;
//			en++;
//
//		}
//	}
//	cout << mn;
//
//}
