#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100000];
int target;
int result = 0;
int main()
{
	cin >> n;

	int left = 0, right = n - 1;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cin >> target;

	sort(arr, arr + n);

	while (left < right)
	{
		if (arr[left] + arr[right] == target)
		{
			left++;
			right--;
			result++;
		}
		else if (arr[left] + arr[right] < target)
		{
			left++;
		}
		else if (arr[left] + arr[right] > target)
		{
			right--;
		}
	}

	cout << result;
}
