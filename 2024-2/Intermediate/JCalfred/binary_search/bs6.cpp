//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//typedef long long ll;
//int M,N;
//ll arr[1000005];
//
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	
//	cin >> M >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//	ll st = 0, en = 0x7fffffff;
//	while(st < en)
//	{
//		ll mid = (st + en + 1) / 2;
//		ll cur = 0;
//		for (int i = 0; i < N; i++) {
//			cur += arr[i] / mid;
//		}
//		if (cur >= M) {
//			st = mid;
//			
//		}
//		else {
//			en = mid - 1;
//		}
//
//	}
//	cout << st;
//
//	return 0;
//}