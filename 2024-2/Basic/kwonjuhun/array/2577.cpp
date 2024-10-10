#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int a, b, c, d;
	int num[10] = { 0 };

	cin >> a >> b >> c;

	d = a * b * c;

	string sd = to_string(d);

	for (auto i : sd) {
		num[i - '0']++;
	}

	for (auto i : num) {
		cout << i << endl;
	}

	return 0;
}
