#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	a = a * b * c;
	int arr[10] = { 0 };
	while (a) {
		b = a % 10;
		a /= 10;
		arr[b]++;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}
