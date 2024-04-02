#include <iostream>
#include <list>
using namespace std;

int t;
string s;
int main()
{
	cin >> t;

	while (t--)
	{
		list<char> l;
		list<char>::iterator it = l.end();

		cin >> s;

		for (char str : s)
		{
			if (str == '<')
			{
				if (it != l.begin()) it--;
			}
			else if (str == '>')
			{
				if (it != l.end()) it++;
			}
			else if (str == '-')
			{
				if (it != l.begin()) l.erase(prev(it));
			}
			else
				l.insert(it, str);
		}

		for (char str : l)
		{
			cout << str;
		}
		cout << '\n';
	}
}
