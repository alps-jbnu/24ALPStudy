#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int A, B, C, result;
	int count[10] = { 0 };
	cin >> A >> B >> C;
	result = A * B * C;
	do {
		count[result % 10]++;
		result /= 10;
	} while (result != 0);
	for (int i = 0; i < 10; i++) cout << count[i] << endl;
	return 0;
}
