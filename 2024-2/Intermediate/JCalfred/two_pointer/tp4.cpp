//#include<iostream>
//#include<algorithm>
//#include<utility>
//#include<vector>
//using namespace std;
//
//int arr[1000005];
//int n, k;
//int len = 0;
//vector<pair<int, int>> v;
//int main(void) {
//	cin >> n >> k;
//	int st, en;
//	for (int i = 0; i < n; i++) {
//		cin >> st >> en;
//		for (; st + 1 <= en; st++)	arr[st]++;
//	}
//	en = 0;
//	len = arr[0];
//	for (st = 0; st < 1000000; st++) {
//		while (en < 1000000 && len < k)	
//		{
//			en++;
//			if(en!=1000000)
//				len += arr[en];
//		}
//		if (en == 1000000)	break;
//		if (len == k) {
//			cout << st << ' ' << en +1;
//			return 0;
//		}
//
//		len -= arr[st];
//	}
//
//	cout << 0 << ' ' << 0;
//}