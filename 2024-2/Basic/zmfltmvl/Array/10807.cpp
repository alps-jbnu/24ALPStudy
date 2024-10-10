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

	int arr[201] = {0, };
	int arr2[n];

	for (int i = 0; i < n; i++) {
		cin >> arr2[i];
	}

	int m;
	cin >> m;

	for (int i = 0; i < n; i++) {
		if (arr2[i] == m) {
			arr[m + 100]++;
		}
	}

	cout << arr[m + 100];

	return 0;
}
