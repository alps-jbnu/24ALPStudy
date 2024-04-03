#include <bits/stdc++.h>
#define fastio std::cin.tie(0)->sync_with_stdio(0)
using namespace std;

enum Direction
{
	FORWARD,
	BACKWARD
};

deque<int> deq;
Direction d;

bool AC();
void parsing(const string&);
void reverseArr();
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
			reverseArr();
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
	d = FORWARD;
	istringstream iss(arr);
	char c; int x;

	while (iss >> c)
		if (isdigit(c))
		{
			iss.unget(); iss >> x;
			deq.push_back(x);
		}
}

void reverseArr()
{
	switch (d)
	{
	case FORWARD:
		d = BACKWARD;
		break;
	case BACKWARD:
		d = FORWARD;
		break;
	}
}

bool deleteArr()
{
	if (deq.empty()) return false;
	else 
	{
		switch (d)
		{
		case FORWARD:
			deq.pop_front();
			break;
		case BACKWARD:
			deq.pop_back();
			break;
		}
	}
	return true;
}

void printResult()
{
	cout << '[';
	while (!deq.empty())
	{
		switch (d)
		{
		case FORWARD:
			cout << deq.front(); deq.pop_front();
			break;
		case BACKWARD:
			cout << deq.back(); deq.pop_back();
			break;
		}

		if (!deq.empty()) cout << ',';
	}
	cout << ']' << '\n';
}
