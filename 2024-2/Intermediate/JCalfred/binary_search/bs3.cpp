//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int arr[1000005];
//vector<int> tmp;
//int N;
//int main(void) {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//		tmp.push_back(arr[i]);
//	}
//	sort(tmp.begin(), tmp.end());
//	//unique는 중복되지 않는 원소들을 앞에서부터 채우고 중복된것들은 뒤에 시작하여
//	//  중복 시작값 반환, 중복값 제거시 erase (반환값, 마지막값)
//	tmp.erase(unique(tmp.begin(), tmp.end()),tmp.end());
//	for (int i = 0; i < N; i++) {
//		cout << lower_bound(tmp.begin(), tmp.end(), arr[i]) - tmp.begin() << " ";
//
//	}
//	return 0;
//}