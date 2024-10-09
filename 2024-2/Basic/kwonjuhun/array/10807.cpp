#include <iostream>
using namespace std;

int main(void) {
	int n, target, count = 0;
	cin >> n;

	int *arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cin >> target;

	for (int i = 0; i < n; i++) {
		if (target == arr[i])
			count++;
	}

	cout << count;

	delete[] arr;

	return 0;
}
