#include <iostream>
#include <stack>
using namespace std;

int main() {	
	string bracket; 
	int T;  
	int bracket_size = 0;  
	string result;
	
	cin >> T;
	for (int i = 0; i < T; i++) {
		stack<char> s;	
		result = "YES";	// result 값은 YES로 초기화

		cin >> bracket;	
		bracket_size = bracket.size();	

		for (int j = 0; j < bracket_size; j++) {
			if (bracket[j] == '(') {  // 여는 괄호일때
				s.push('(');
			}

			else if (bracket[j] == ')') {  // 닫는 괄호일때,
				if (!s.empty()) {  // 스택이 비어있지 않으면,
					s.pop();
				}
				else {  // 비어있으면
					result = "NO";
				}
			}
		}

		// 마지막까지 연산완료 후,
		// 여는 괄호와 닫는 괄호의 짝이 맞지 않는 경우	
		// 즉, 스택이 비어있지 않은 경우
		if (!s.empty()) {  
			result = "NO";
		}

		cout << result << endl;

	}

	return 0;
}
