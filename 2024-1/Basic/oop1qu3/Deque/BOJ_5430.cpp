#include <bits/stdc++.h>
#define fastio std::cin.tie(0)->sync_with_stdio(0)
using namespace std;

deque<int> deq;
bool isReversed;

bool AC();
void parsing(const string&);
bool deleteArr();
void printResult();

int main()
{
	fastio;
	
	int T; cin >> T;

	while (T--)
	{
		if (AC()) printResult();
		else cout << "error" << '\n';
	}
}

bool AC()
{
	string func, arr;
	int n;
	cin >> func >> n >> arr;

	parsing(arr);

	for (char c : func)
	{
		switch (c)
		{
		case 'R':
			isReversed = 1 - isReversed;
			break;
		case 'D':
			if (!deleteArr()) return false;
			break;
		}
	}

	return true;
}

void parsing(const string& arr)
{
	deq.clear();
	isReversed = false;
	istringstream iss(arr);
	char c; int x;

	while (iss >> c)
		if (isdigit(c))
		{
			iss.unget(); iss >> x;
			deq.push_back(x);
		}
}

bool deleteArr()
{
	if (deq.empty()) return false;
	else 
	{
		if (!isReversed) deq.pop_front();
		else deq.pop_back();
	}
	return true;
}

void printResult()
{
	cout << '[';
	while (!deq.empty())
	{
		if (!isReversed)
		{
			cout << deq.front();
			deq.pop_front();
		}
		else
		{
			cout << deq.back(); 
			deq.pop_back();
		}

		if (!deq.empty()) cout << ',';
	}
	cout << "]\n";
}
