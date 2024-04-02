#include <iostream>
using namespace std;

/*
짝수인 경우
1 + (n-2) + 1
(n/3) + (n/3)
n

홀수인 경우
1 + (n-2) + 1
(n/3) + 1 + (n/3)
n

홀수, 짝수 동일하게 
 - n인 경우를 +1 해줘야하지만, p[n-2]와 p[n/2]에서 1+…+1이 중복되므로 -1 총 0
 -> pp[n] = p[n-2] + p[n/2]

*/

const int MAX = 1000;

int t, n;
int pp[MAX + 5];

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	pp[1] = 1;
	pp[2] = 2;
	pp[3] = 2;

	for (int i = 4; i <= MAX; i++) {
		pp[i] = pp[i - 2] + pp[i / 2];
	}

	cin >> t;
	while (t--) {
		cin >> n;
		cout << pp[n] << '\n';
	}

	return 0;
}
