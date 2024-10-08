#include <iostream>
using namespace std;

int numbers[2000001] = { 0 };

int main(void) {
	int n, target, a, count = 0;

	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		numbers[arr[i]]++;
	}

	cin >> target;

	for (int i = 0; i < n; i++) {
		if (target - arr[i] > 0 && numbers[target - arr[i]] == 1)
			count++;
	}

	cout << count/2;

	delete[] arr;

	return 0;
}	
