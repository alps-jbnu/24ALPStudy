#include<iostream>
#include<stack>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	stack<int> st;
	int arr[500001] = { 0 };
	cin >> arr[0];
	st.push(0);
	cout << 0 << " ";
	for (int i = 1; i < n; i++) {
		cin >> arr[i];
		while (!st.empty() && arr[st.top()] < arr[i]) {
			st.pop();
		}
		if (!st.empty()) {
			cout << st.top() + 1 << " ";
		}
		else if (st.empty()) {
			cout << 0 << " ";
		}
		st.push(i);
	}
	return 0;
}
