//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int N;
//int arr[1005];
//vector<int> tmp;
//int main(void) {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//	sort(arr, arr + N);
//	for (int i = 0; i < N; i++) {
//		for (int j = i; j < N; j++) {
//			tmp.push_back(arr[i] + arr[j]);
//		}
//	}
//	sort(tmp.begin(), tmp.end());
//	for (int i = N-1; i > 0; i--) {
//		for (int j = 0; j < i; j++) {
//			if (binary_search(tmp.begin(), tmp.end(), arr[i] - arr[j]))
//			{
//				cout << arr[i];
//				return 0;
//			}
//		}
//	}
//	return 0;
//}