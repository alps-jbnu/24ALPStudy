#include<iostream>
#include<stack>
using namespace std;

int main(void)
{
	stack<int> st;
	string s;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> s;
		if (s == "push")
		{
			int num = 0;
			cin >> num;
			st.push(num);
		}
		else if (s == "pop")
		{
			if (st.empty())
				cout << "-1" << '\n';
			else
			{
				cout << st.top() << '\n';
				st.pop();
			}
		}
		else if (s == "size")
		{
			int size = st.size();
			cout << size << '\n';
		}
		else if (s == "empty")
		{
			if (st.empty())
				cout << "1" << '\n';
			else
				cout << "0" << '\n';

		}
		else if (s == "top")
		{
			if (!st.empty())
				cout << st.top() << '\n';
			else
			{
				cout << "-1" << '\n';
			}
		}
	}
	return 0;
}
