#include <iostream>
using namespace std;

int main(void) {
	string num;
	int arr[10] = { 0 };

	cin >> num;

	for (auto i : num)
		arr[i - '0']++;

	arr[6] = (arr[6] + arr[9]) % 2 == 0 ? (arr[6] + arr[9]) / 2 : (arr[6] + arr[9]) / 2 + 1;

	int max = 0;

	for (int i = 0; i < 9; i++)
		if (max < arr[i])
			max = arr[i];

	cout << max;

	return 0;
}	
