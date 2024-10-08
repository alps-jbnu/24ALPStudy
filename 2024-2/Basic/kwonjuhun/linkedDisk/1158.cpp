#include <iostream>
using namespace std;

void arrDelete(int arr[], int &len, int id) {
	len--;
	for (int i = id; i < len; i++) {
		arr[i] = arr[i + 1];
	}
}

int main(void) {
	int n, k, id = 0;
	cin >> n >> k;

	int len = n;

	int *arr = new int[n];
	for (int i = 1; i <= n; i++)
		arr[i - 1] = i;

	cout << "<";
	for (int i = 0; i < n; i++) {
		cout << arr[id = (id + k) % len - 1 < 0 ? len + (id + k) % len - 1 : (id + k) % len - 1];

		arrDelete(arr, len, id);
		if (len == 0)
			break;

		cout << ", ";
	}
	cout << ">";

	delete[] arr;

	return 0;
}
