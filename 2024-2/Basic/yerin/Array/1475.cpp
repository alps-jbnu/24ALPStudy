#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	int count = 0;
	int num[9] = { 0 };
	cin >> N;
	do {
		if (N % 10 == 9) num[6]++;
		else num[N % 10]++;
		N /= 10;
	} while (N != 0);
	if (num[6] % 2 == 1) num[6] = num[6] / 2 + 1;
	else num[6] /= 2;
	cout<<*max_element(num, num+9);
	return 0;
}
