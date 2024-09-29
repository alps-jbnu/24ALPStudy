#include <iostream>
using namespace std;

int girl[7];
int boy[7];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, K, S, Y;
	int count = 0;
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> S >> Y;
		if (S) boy[Y]++;
		else girl[Y]++;
	}
	
	for (int i = 1; i <= 6; i++) {
		count = count + (boy[i] + (K - 1)) / K;
		count = count + (girl[i] + (K - 1)) / K;
	}
	cout << count;
	return 0;
}
