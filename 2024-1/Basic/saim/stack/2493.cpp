#include<iostream>
#include<stack>
using namespace std;

#define X first
#define Y second
stack<pair<int, int>> tower;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	tower.push({ 100000001, 0 });
	for (int i = 1; i <= N;i++)
	{
		int h;
		cin >> h;
		while (tower.top().X < h)
			tower.pop();
		cout << tower.top().Y << " ";
		tower.push({ h, i });
	}
}
