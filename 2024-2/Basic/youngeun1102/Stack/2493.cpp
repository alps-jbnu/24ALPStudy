#include <iostream>
#include <stack>
using namespace std;
#define X first
#define Y second

int n;
stack<pair<int, int>> tower;
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	tower.push({ 1000000001,0 });
	for (int i = 1; i <= n; i++) {
		int height;
		cin >> height;
		while (tower.top().X < height)
			tower.pop();
		cout << tower.top().Y << " ";
		tower.push({ height,i });
	}
}
