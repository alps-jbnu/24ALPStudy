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
//	//unique�� �ߺ����� �ʴ� ���ҵ��� �տ������� ä��� �ߺ��Ȱ͵��� �ڿ� �����Ͽ�
//	//  �ߺ� ���۰� ��ȯ, �ߺ��� ���Ž� erase (��ȯ��, ��������)
//	tmp.erase(unique(tmp.begin(), tmp.end()),tmp.end());
//	for (int i = 0; i < N; i++) {
//		cout << lower_bound(tmp.begin(), tmp.end(), arr[i]) - tmp.begin() << " ";
//
//	}
//	return 0;
//}