#include<iostream>
#include<list>
using namespace std;
int main(void)
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	int TC;

	list<char> l;
	list<char>::iterator t;
	string L;
	cin >> TC;

	for (int i = 0;i < TC; i++)
	{
		cin >> L;
		l.clear();
		t = l.begin();
		for (int j = 0; j < L.length();j++)
		{
			if (L[j] == '<' && t != l.begin()) t--;
			else if (L[j] == '>' && t != l.end()) t++;
			else if (L[j] == '-' && t != l.begin()) t = l.erase(--t);
			else if (L[j] != '<' && L[j] != '>' && L[j] != '-') l.insert(t, L[j]);
		}
		for (t = l.begin(); t != l.end(); t++)
			cout << *t;
		cout << '\n';
		
	}
	return 0;
}
