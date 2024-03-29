#include <iostream>
#include <list>
using namespace std;

int main()
{
	string s;
	int num;
	char insertNum;

	cin >> s;
	cin >> num;

	list<char> l(s.begin(), s.end());
	list<char>::iterator it = l.end();

	for (int i = 0; i < num; i++)
	{
		cin >> s;
		if (s == "L")
		{
			if(it != l.begin())
				it--;
		}
		else if (s == "D")
		{
			if(it != l.end())
				it++;
		}
		else if (s == "B")
		{
			if (it != l.begin())
			{
				l.erase(prev(it));
			}
		}
		else if (s == "P")
		{
			cin >> insertNum;
			l.insert(it, insertNum);
		}
	}

	for (char m : l)
	{
		cout << m;
	}
}
