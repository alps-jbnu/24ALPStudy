#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	stack<char> s;

	int n1 = 0;
	int n2 = 0;
	int sum1 = 0;
	int sum2 = 0;
	int result = 0;

	for (int i = 0; i < str.length(); i++) {
		char a = str[i];
		// top과 a가 다른 경우
		if (!s.empty() && (s.top() != a)) {
			if (s.top() == '(') {
				if (n1 >= 2) sum1 += n1 - 1;
				n1 = 0;
			}
			else if (s.top() == ')') {
				if (n2 >= 2) sum2 += n2 - 1;
				n2 = 0;
				result += sum1 * sum2;
				sum2 = 0;
			}
			// 스택 비우기
			while (!s.empty()) s.pop();
		}
		s.push(a);
		if (a == '(') n1++;
		else if (a == ')') n2++;
	}

	if (n1 >= 2) sum1 += n1 - 1;
	if (n2 >= 2) sum2 += n2 - 1;
	result += sum1 * sum2;
	cout << result << '\n';

	return 0;
}
