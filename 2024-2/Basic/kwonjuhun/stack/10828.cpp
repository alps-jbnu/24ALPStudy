#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void) {
	stack<int> s;

	int t;
	cin >> t;

	for(int i = 0; i < t; i++)
	{
		string commend;
		cin >> commend;

		if (!commend.compare("push")) {
			int n;
			cin >> n;

			s.push(n);
		}
		else if (!commend.compare("pop")) {
			if (!s.empty()) {
				cout << s.top() << endl;
				s.pop();
			}
			else cout << "-1" << endl;
		}
		else if (!commend.compare("size")) {
			cout << s.size() << endl;
		}
		else if (!commend.compare("empty")) {
			cout << s.empty() << endl;
		}
		else {
			if(!s.empty()) cout << s.top() << endl;
			else cout << "-1" << endl;
		}
	}

	return 0;
}
