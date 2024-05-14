#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[100001] = { 0 };
	vector<char> vec;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	stack<int> st;
	int idx = 0;
	for (int i = 1; i <= n; i++) {
		st.push(i);
		vec.push_back('+');
		while (!st.empty() && arr[idx] == st.top()) {
			vec.push_back('-');
			st.pop();
			idx++;
		}
	}
	if (st.empty()) {
		for (int i = 0; i < vec.size(); i++) {
			cout << vec[i] << "\n";
		}
	}
	else {
		cout << "NO";
	}
	return 0;
}
