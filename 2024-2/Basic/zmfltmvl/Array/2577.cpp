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

	int a, b, c, d;
	cin >> a >> b >> c;

	int arr[10] = {0, };

	d = a * b * c;

	while (d > 0) {
		int k = d % 10;
		arr[k]++;
		d = d / 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}
	
	return 0;
}
