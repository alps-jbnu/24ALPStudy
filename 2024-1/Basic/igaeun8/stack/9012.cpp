#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
	int T;
	cin >> T;
	
	while (T > 0) {
		T--;
		string str;
		cin >> str;

		stack<char> s;
		string answer = "YES";
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(') {
				s.push(str[i]);
			}
			// 짝이 맞는지 확인하고 pop
			else if (!s.empty() && str[i] == ')' && s.top() == '(') {
				s.pop();
			}
            else{
				answer = "NO";
				break;
			}
		}
		//'('와 ')'가 짝이 안 맞는 경우 스택이 비지 않음
		if (!s.empty()) answer = "NO";

		cout << answer << endl;
	}
	return 0;
}
