#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <deque>
using namespace std;

string d[300];

// 더하기 함수를 만들어서, 문자열로
// 덱으로? 벡터로?

void func(int i) {
	deque<int> v1;
	deque<int> v2;
	for (auto e : d[i - 1]) {
		v1.push_back(e - '0');
	}
	for (auto e : d[i - 2]) {
		v2.push_back(e - '0');
	}

	string str = "";
	int nxtNum = 0, num1, num2, num;
	while (!v1.empty() || !v2.empty()) {
		if (!v1.empty()) {
			num1 = v1.back();
			v1.pop_back();
		}
		else num1 = 0;
		if (!v2.empty()) {
			num2 = v2.back();
			v2.pop_back();
		}
		else num2 = 0;
		num = nxtNum + num1 + 2 * num2;
		nxtNum = num / 10;
		num = num % 10;
		str = to_string(num) + str;
		//cout << num1 << ' ' << num2 << '\n';
		//cout << str << ' ' << nxtNum << num << '\n';
	}
	if(nxtNum) str = to_string(nxtNum) + str;

	d[i] = str;

	return;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	d[0] = '1';
	d[1] = '1';
	d[2] = '3';
	for (int i = 3; i < 251; i++) {
		func(i);
		//cout << i << " : " << d[i] << '\n';
	}

	int n;
	while (scanf("%d", &n) != EOF) {
		cout << d[n] << '\n';
	}

	return 0;
}
