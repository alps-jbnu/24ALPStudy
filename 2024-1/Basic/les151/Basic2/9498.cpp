#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a;
	char s;
	cin >> a;
	if (a >= 90)
		s = 'A';
	else if (a >= 80)
		s = 'B';
	else if (a >= 70)
		s = 'C';
	else if (a >= 60)
		s = 'D';
	else
		s = 'F';
	cout << s;
	return 0;
}
