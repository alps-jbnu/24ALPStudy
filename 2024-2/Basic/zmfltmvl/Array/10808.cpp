#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a;
	cin >> a;

	int arr[26] = {0, };

	for (int i = 0; i < a.length(); i++) {
		int b = a[i] - 97;
		arr[b]++;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}
