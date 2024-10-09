// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <vector>
// #include <set>
// #include <map>
// #include <stack>
// #include <queue>
// #include <utility>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int arr[100001];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int x;
	cin >> x;

	sort (arr, arr + n);

	int c = 0, left = 0, right = n - 1;
	while (left < right) {
		if (arr[left] + arr[right] == x) {
			c++;
			left++;
			right--;
		} else if (arr[left] + arr[right] > x) {
			right--;
		} else {
			left++;
		}
	}

	cout << c;

	return 0;
}
