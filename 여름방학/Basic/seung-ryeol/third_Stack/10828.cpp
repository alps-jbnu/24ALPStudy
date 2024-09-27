#include <iostream>

using namespace std;
int arr[1000005];
int a;

int main(void) 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x;
	cin >> x;
	string s;
	for (int i = 0; i < x; i++) {
		cin >> s;
		if (s == "push") {
			int z;
			cin >> z;
			arr[a] = z;
			a++;
		}
		else if (s == "top") {
			if (a == 0) {
				cout << -1 << '\n';
			}
			else{
			cout << arr[a-1] << '\n';
			
			}
		}
		else if (s == "size") {
			cout << a << '\n';
		
		}
		else if (s == "pop") {
			if (a == 0) {
				cout << -1 << '\n';
			
			}
			else {
				cout << arr[a - 1] << '\n';
				a--;
			}
		}
		else if (s == "empty") {
			if (a == 0) {
				cout << 1 << '\n';
		
			}
			else {
				cout << 0 << '\n';

			}
		}
	}
	return 0;
}
