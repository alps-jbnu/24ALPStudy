//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//typedef long long ll;
//int N, k;
//int arr[10005];
//vector<int> tmp;
//void bs() {
//	ll st = 0, en = 0x7fffffff;
//	while (st < en) {
//		ll mid = (st + en + 1) / 2;
//		ll cur = 0;
//		for (int i = 0; i < k; i++) {
//			cur += tmp[i] / mid;
//		}
//		if (cur >= N) {
//			st = mid;
//		}
//		else
//			en = mid - 1;
//	}cout << st;
//}
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> k >> N;
//	for (int i = 0; i < k; i++) {
//		int c;
//		cin >> c;
//		tmp.push_back(c);
//	}
//	bs();
//		
//	return 0;
//}