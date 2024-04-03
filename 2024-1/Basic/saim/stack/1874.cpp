#include<iostream>
#include<stack>
using namespace std;

int main(void)
{
	int N;
	int cnt = 1;
	stack <int> st;
	string ans;
	cin >> N;
	while (N--)
	{
		int num;
		cin >> num;
		while (cnt <= num)
		{
			st.push(cnt++);
			ans += "+\n";
		}
		if (st.top() != num)
		{
			cout << "NO\n";
			return 0;
		}
		st.pop();
		ans += "-\n";
	}
	cout << ans;
}
