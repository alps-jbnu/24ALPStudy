#include<iostream>
#include<deque>
#include <string>
using namespace std;

int main(void)
{
	deque<int> Q;
	string s;
	int N,X;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> s;
		if (s == "push_front")
		{
			cin >> X;
			Q.push_front(X);
		}
		else if (s == "push_back")
		{
			cin >> X;
			Q.push_back(X);
		}
		else if (s == "pop_front")
			if (Q.empty())
				cout << -1 << "\n";
			else
			{
				cout << Q.front() << "\n";
				Q.pop_front();
			}
		else if (s == "pop_back")
			if (Q.empty())
				cout << -1 << "\n";
			else
			{
				cout << Q.back() << "\n";
				Q.pop_back();
			}
		else if (s == "size")
		{
			cout << Q.size() << "\n";
		}
		else if (s == "empty")
		{
			if (Q.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (s == "front")
		{
			if (Q.empty())
				cout << -1 << "\n";
			else
				cout << Q.front() << "\n";
		}
		else if (s == "back")
		{
			if (Q.empty())
				cout << -1 << "\n";
			else
				cout << Q.back() << "\n";
		}
	}
	return 0;
}
