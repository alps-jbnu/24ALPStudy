#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[21] = { 0 };
	for (int i = 1; i <= 20; i++) {
		arr[i] = i;
	}
	int start, end;
	for (int i = 0; i < 10; i++) {
		cin >> start >> end;
		reverse(arr + start, arr + end + 1);
	}
	for (int i = 1; i <= 20; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
