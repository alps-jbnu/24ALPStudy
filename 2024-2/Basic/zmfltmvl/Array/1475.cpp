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

	int a;
	cin >> a;

	string k = to_string(a);

	int arr[10] = {0, };

	for (int i = 0; i < k.length(); i++) {
		int b = k[i] - 48;
		arr[b]++;
	}

	if ((arr[6] + arr[9]) % 2 == 0) {
		arr[6] = (arr[6] + arr[9]) / 2;
		arr[9] = arr[6];
	} else {
		arr[6] = (arr[6] + arr[9]) / 2 + 1;
		arr[9] = arr[6];
	}

	int m = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] > m) {
			m = arr[i];
		}
	}

	cout << m;

	return 0;
}
