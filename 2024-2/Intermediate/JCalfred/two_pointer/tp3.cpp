//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int arr[1000005];
//int s, k;
//int len = 0;
//
//int main(void) {
//	cin >> s >> k;
//
//	for (int i = 0; i < s; i++)	cin >> arr[i];
//	int en = 0;
//	int cnt = 0;
//	if (arr[0] % 2 == 1)cnt++;
//
//	for (int st = 0; st < s; st++) {
//		
//		while (en < s ) {
//			if (k != 0 && cnt > k)break;
//			en++;
//			if (arr[en] % 2 == 1)cnt++;
//			
//		}
//		if (en == s)en--;
//		len = max(len, en - st + 1 - cnt );
//		
//		if (arr[st] % 2 == 1 && k != 0) cnt--;
//	}
//
//		cout << len;
//}