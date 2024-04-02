#include <iostream>
using namespace std;

int main(void)
{
	int A, B, C;
	int n;
	int arr[10] = { 0 };
	cin >> A;
	cin >> B;
	cin >> C;
	n = A * B * C;
	while (n > 0)
	{
		arr[n % 10] += 1;
		n /= 10;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
