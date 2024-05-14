#include <iostream>
using namespace std;

int facto(int n) {
	if (n <= 1)
		return 1;
	else
		return n * facto(n - 1);
}

int main() {
	int n;
	cin >> n;
	cout << facto(n) << '\n';
}
