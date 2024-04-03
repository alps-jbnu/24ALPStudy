#include<iostream>
#include<string>
#include<deque>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		string p;
		cin >> p;
		int n;
		cin >> n;
		string str, tmp="";
		cin >> str;
		int arr[101] = { 0 };
		deque<int> deq;
		for (int i = 0; i < str.size(); i++) {
			if (isdigit(str[i])) // 문자가 숫자이면
				tmp += str[i];
			else {
				if (!tmp.empty()) {
					deq.push_back(stoi(tmp));
					tmp = "";
				}
			}
		}
		bool reverse = false, pos = true; // reverse 판단, error발생 판단
		for (int i = 0; i < p.size(); i++) {
			if (p[i] == 'R') {
				reverse = !reverse;
			}
			else {
				if (deq.empty()) { // 비었을 때 'D'이면 error처리
					pos = false;
					cout << "error\n";
					break;
				}
				if (reverse)
					deq.pop_back();
				else
					deq.pop_front();
			}
		}
		if (!pos)
			continue;
		cout << "[";
		if (!deq.empty()) {
			if (!reverse) { // reverse 여부에 따라 출력
				for (int i = 0; i < deq.size() - 1; i++) {
					cout << deq[i] << ",";
				}
				cout << deq.back();
			}
			else {
				for (int i = deq.size() - 1; i > 0; i--) {
					cout << deq[i] << ",";
				}
				cout << deq.front();
			}
		}
		cout << "]\n";
	}
	return 0;
}
